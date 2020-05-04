'''

                            Online Python Compiler.
                Code, Compile, Run and Debug python program online.
Write your code in this editor and press "Run" button to execute it.

'''

from __future__ import print_function, division
from base64 import b32decode
from binascii import a2b_hex
import sys, os
import re

# ipv4 in ipv6 prefix
pchIPv4 = bytearray([0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0xff, 0xff])

def name_to_ipv6(addr):
    if len(addr)>6 and addr.endswith('.onion'):
        vchAddr = b32decode(addr[0:-6], True)
        if len(vchAddr) != 16-len(pchOnionCat):
            raise ValueError('Invalid onion %s' % s)
        return pchOnionCat + vchAddr
    elif '.' in addr: # IPv4
        return pchIPv4 + bytearray((int(x) for x in addr.split('.')))
    elif ':' in addr: # IPv6
        sub = [[], []] # prefix, suffix
        x = 0
        addr = addr.split(':')
        for i,comp in enumerate(addr):
            if comp == '':
                if i == 0 or i == (len(addr)-1): # skip empty component at beginning or end
                    continue
                x += 1 # :: skips to suffix
                assert(x < 2)
            else: # two bytes per component
                val = int(comp, 16)
                sub[x].append(val >> 8)
                sub[x].append(val & 0xff)
        nullbytes = 16 - len(sub[0]) - len(sub[1])
        assert((x == 0 and nullbytes == 0) or (x == 1 and nullbytes > 0))
        return bytearray(sub[0] + ([0] * nullbytes) + sub[1])
    elif addr.startswith('0x'): # IPv4-in-little-endian
        return pchIPv4 + bytearray(reversed(a2b_hex(addr[2:])))
    else:
        raise ValueError('Could not parse address %s' % addr)

def parse_spec(s):
    match = re.match('\[([0-9a-fA-F:]+)\](?::([0-9]+))?$', s)
    if match: # ipv6
        host = match.group(1)
        port = match.group(2)
    else:
        (host,_,port) = s.partition(':')

    if not port:
        port = "123"
    else:
        port = int(port)

    host = name_to_ipv6(host)

    return (host)
    
host2 = parse_spec("192.168.0.1")
hoststr = ','.join(('0x%02x' % b) for b in host2)
print("     {{" + hoststr +"}, 9981},")

'''
{{0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0x00,0xff,0xff,0x05,0x13,0x05,0x7f}, 9981},
g.write('    {{%s}, %i}' % (hoststr))
g.write('\n};\n')    

$x = 5;
$y = 4;
echo "$x + $y = ".($x + $y);
print("{0} + {1} = {2}".format(x, y, x + y))
'''

