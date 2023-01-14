Yenten Core
=====================================

https://yentencoin.info

**Download latest wallet:**
https://github.com/yentencoin/yenten/releases

**Yenten 5.0.0 released**
The full transition to version 5 will be January 30, 2023.
The old version will no longer work after Jan. 30.
The new version is backward-compatible and works fine now, so you can migrate now.

What is Yenten Coin?

----------------

![screenshot](https://raw.githubusercontent.com/yentencoin/yenten/yenten-5.0.0/docs/screen.png)
![](https://raw.githubusercontent.com/yentencoin/yenten/yenten-4.0.0/docs/images/header-teamwork.png)

# Yenten is a cryptocurrency of the cpu, by the cpu, for the cpu.
No ASIC mineable. No ICO. No premine.

Yenten Coin is a cryptocoin only for processors.
Our coin has a very large and sociable community. The main team members are located in Japan, America and Russia.
The coin does not have a premine, the coins are equally apportioned among all mining participants. Some time ago Yenten Coin almost died, but it was able to resurrect as a phoenix and is now actively developing.

The purpose of the coin is to give everyone the opportunity to enter the cryptoworld, everyone who has an average processor in a computer can mine it. It is very similar to Doge Coin, but only for processors (we are against mining on video cards - this gives mining concentration in one hand), we are for decentralization.

**What can you do to develop a coin?**
To tell about the coin everyone and everywhere, to educate, to help tune miners and wallets. The potential audience of the coin is people who play online games on home computers and all who are interested in new technologies.

**What we work on:**

 1. A new, improved design of the official website (www.yentencoin.info)
 
 2. A convenient installer for the official "cold" wallet with step-by-step hints and instructions built-in. These instructions will include both text and visual hints useful for novices who decided to use our utility for fast downloading of the cold wallet based on the full Yenten blockchain.

 3. Adding Yenten to as many exchanges as possible.

 4. Creation of database with "how-to-use" instructions for the official wallet, the exchanges, miners etc at the partner's website (www.cpu-mining.info)

 5. Banner advertisement on the (www.cpu-mining.info) - Yenten coin as easy-for-use, "a coin for everyone".

 6. Final release of the official GUI-miner with the menu and embedded links to a coin resources.

 7. Bounty program.

 8. Creation and maintenance of topics about Yenten on cryptocurrency forums.

 9. Positioning of Yenten as a "cryptocoin for everyone": everyone will be able to get it even with a typical home computer - it is easy and simple.

10. Advertisement of Yenten at the game forums, youth engagement.

**Our official motto:** "Yenten - a cryptocoin for CPU-mining only; fast transactions, easy-in-use and safe official wallet. We are like Dogecoin, but CPU-only!"

In general, the work is in full swing - there are lots of ideas, the coin and algorithm are excellent.

**Why don't we have a roadmap?**
We constantly monitor the market and technology, develop together with the world, we do not have a specific person who does something and then receives all the profit from the project. The project belongs to all of you, to the whole community, everyone is doing something. We are always open to new ideas, developments and implementations.



# Build yentend on Ubuntu 16.04, 18.04
http://cpu-mining.info/post.php?post=4

```
sudo add-apt-repository universe
sudo apt-get update
sudo apt-get install git
sudo apt-get install build-essential
sudo apt-get install libtool autotools-dev autoconf
sudo apt-get install libssl-dev
sudo apt-get install libboost-all-dev
sudo apt-get install pkg-config
sudo apt-get install libevent-dev
sudo apt-get install libzmq3-dev
sudo add-apt-repository ppa:bitcoin/bitcoin
sudo apt-get update
sudo apt-get install libdb4.8-dev
sudo apt-get install libdb4.8++-dev

git clone https://github.com/yentencoin/yenten.git
cd yenten
./autogen.sh
./configure --enable-upnp-default --without-gui
make -j 4
```

# Build yentend on Ubuntu 20.04
http://cpu-mining.info/post.php?post=5

```
sudo add-apt-repository universe
sudo apt-get update
sudo apt-get install git
sudo apt-get install build-essential
sudo apt-get install libtool autotools-dev autoconf
sudo apt-get install libssl-dev
sudo apt-get install libboost-all-dev
sudo apt-get install pkg-config
sudo apt-get install libevent-dev
sudo apt-get install libzmq3-dev

git clone https://github.com/yentencoin/yenten.git
cd yenten
cd contrib
chmod +x install_db4.sh
./install_db4.sh .
cd ..
./autogen.sh
export BDB_PREFIX='/home/ubuntu/yenten/contrib/db4'
./configure --enable-upnp-default --without-gui BDB_LIBS="-L${BDB_PREFIX}/lib -ldb_cxx-4.8" BDB_CFLAGS="-I${BDB_PREFIX}/include"
make -j 4
```

**conf file (yenten.conf)**
```
cd ~/.yenten/
nano yenten.conf
```

```
server=1
daemon=1
gen=0
rpcuser=user
rpcpassword=your_password
rpcallowip=your_network/your_mask
rpcallowip=127.0.0.1
addnode=185.185.70.244:9981
addnode=spbird.mydns.jp:9981
```

Other node links
----------------

&nbsp;  http://ytn.ccore.online/connections
  
&nbsp;  https://leywapool.com/explorer/peers?id=1428
  
&nbsp;  http://explorer.yentencoin.info/network

Pool list
---------

&nbsp; https://miningpoolstats.stream/yenten



License
-------

Yenten Core is released under the terms of the MIT license. See [COPYING](COPYING) for more
information or see https://opensource.org/licenses/MIT.
