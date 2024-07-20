// Copyright (c) 2009-2010 Satoshi Nakamoto
// Copyright (c) 2009-2018 The Bitcoin Core developers
// Distributed under the MIT software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#include <primitives/block.h>

#include <hash.h>
#include <tinyformat.h>
#include <util/strencodings.h>
#include <crypto/common.h>

#include <stdlib.h>
#include "crypto/yespower/yespower.h"
#include "streams.h"
#include "version.h"
#include "crypto/yespower/sysendian.h"

uint256 CBlockHeader::GetHash() const
{
    CDataStream ss(SER_NETWORK, PROTOCOL_VERSION);
    ss << *this;
    uint32_t time = le32dec(&ss[68]);
    if (time > 1675036800) {
        return SerializeHash(*this);
    } else {
        return SerializeHashYespower(*this);
    }    
    
}

uint256 CBlockHeader::GetPoWHash() const
{
    uint256 thash;
    CDataStream ss(SER_NETWORK, PROTOCOL_VERSION);
    ss << *this;
    
    yespower_params_t yespower_1_0_v1 = {
        .version = YESPOWER_0_5, 
        .N = 4096, 
        .r = 16, 
        .pers = (const uint8_t *)"Client Key",
        .perslen = 10
    };
    
    yespower_params_t yespower_1_0_v2 = {
        .version = YESPOWER_1_0, 
        .N = 4096, 
        .r = 16, 
        .pers = NULL,
        .perslen = 0
    };

    uint32_t time = le32dec(&ss[68]);
    if (time > 1553904000) {
        if (yespower_tls((unsigned char *)&ss[0], ss.size(), &yespower_1_0_v2, (yespower_binary_t *)&thash)) {
            abort();
        }
    } else {
        if (yespower_tls((unsigned char *)&ss[0], ss.size(), &yespower_1_0_v1, (yespower_binary_t *)&thash)) {
            abort();
    }
    }

    
    
    return thash;
}

std::string CBlock::ToString() const
{
    std::stringstream s;
    s << strprintf("CBlock(hash=%s, ver=0x%08x, hashPrevBlock=%s, hashMerkleRoot=%s, nTime=%u, nBits=%08x, nNonce=%u, vtx=%u)\n",
        GetHash().ToString(),
        nVersion,
        hashPrevBlock.ToString(),
        hashMerkleRoot.ToString(),
        nTime, nBits, nNonce,
        vtx.size());
    for (const auto& tx : vtx) {
        s << "  " << tx->ToString() << "\n";
    }
    return s.str();
}