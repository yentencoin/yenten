## Welcome to Yenten Coin

![]({{site.baseurl}}/logo_top.png)

Yenten is a cryptocurrency of the cpu, by the cpu, for the cpu.
No ASIC mineable.


**Technical specifications:**
```
Algorithm: YescryptR16 (GPU is slower than CPU)
Block time: 2.0 minutes 
Max Block size: 2M 
Block reward of block #1: 50 YTN 
Total YTN: 84,000,000 YTN 
SubsidyHalvingInterval: 800,000 blocks 
Difficulty re-target: every block (DarkGravityWave v3-1) 
Premine: none 
P2P Port: 9981 
RPC Port: 9982
```

### Download Wallet:
Version 3.0.2 win 64 bit - [yenten_win64_3_0_2.zip](https://github.com/yentencoin/yenten/releases/download/3.0.2/yenten_win64_3_0_2.zip)

Version 3.0.2 win 32 bit - [yenten_win32_3_0_2.zip](https://github.com/yentencoin/yenten/releases/download/3.0.2/yenten_win32_3_0_2.zip)

Version 3.0.2 mac - [Yenten_3_0_2_Qt.dmg](https://github.com/yentencoin/yenten/releases/download/3.0.2/Yenten_3_0_2_Qt.dmg)

> _Version 3.0.2 compatible with 1.3.1._


Version 1.3.1 win 64 bit - [yenten_1_3_1_win64.zip](https://github.com/yentencoin/yenten/releases/download/1.3.1/yenten_1_3_1_win64.zip)

Version 1.3.1 win 32 bit - [yenten_1_3_1_win32.zip](https://github.com/yentencoin/yenten/releases/download/1.3.1/yenten_1_3_1_win32.zip)

**Miner:**

cpuminer-opt - [download](https://github.com/JayDDee/cpuminer-opt/releases)

![]({{site.baseurl}}/yenten_countach.png)

_Winter is coming soon_
![]({{site.baseurl}}/yentten.png)

### Links and other

**Fast_yenten** - quick and easy installation of a wallet - [on github](https://github.com/bubasik/fast_yenten/releases)

_Automatic installation Yenten wallet in folder c:\yenten with last blockchain. Fast run - 5 min._

**Bootstrap Yenten** (Download blockchain)

[http://yenten-pool.ml/blocks_yenten_last.zip](http://yenten-pool.ml/blocks_yenten_last.zip)

**Sample miner bat file for mining Yenten coin:**

```cpuminer-sse2.exe -a yescryptr16 -o stratum+tcp://cpu-pool.com:63368 -u WALLET_ADDRESS```

**Yenten pools:**

[http://cpu-pool.com/](http://cpu-pool.com/)

[https://ytn.firstpool.ru/](https://ytn.firstpool.ru/)

[http://cpumining.zapto.org/](http://cpumining.zapto.org/	)

[http://yenten-pool.ml/](http://yenten-pool.ml/)

**Yenten faucet:**

[http://yenten-pool.ml/faucet/](http://yenten-pool.ml/faucet/)

[http://shiganaiyenten.chocottokozukai.click/](http://shiganaiyenten.chocottokozukai.click/)

**Block Exporers:**

[https://ytn.overemo.com/](https://ytn.overemo.com/)

[http://explorer.yentencoin.info/](http://explorer.yentencoin.info/)

[http://cpumining.zapto.org/explorer/YTN](http://cpumining.zapto.org/explorer/YTN)

**Exchanges**

[https://graviex.net/markets/ytnbtc](https://graviex.net/markets/ytnbtc) BTC pair

[https://trade.multicoins.org/market/MC-YNTN](https://trade.multicoins.org/market/MC-YNTN) MC pair

[https://trade.multicoins.org/market/BTC-YNTN](https://trade.multicoins.org/market/BTC-YNTN) BTC pair

**Community links**

[Yenten forum](http://forum.yentencoin.info/)

[Yenten on Bitcointalk](https://bitcointalk.org/index.php?topic=2329470.0)

[Yenten on Reddit](https://www.reddit.com/r/Yenten/)

[Russian Forum](https://forum.bits.media/index.php?/topic/61231-ytn-cpu-mining-yenten-v131-yescryptr16/&)

[Discord channels](https://discord.gg/RTbPxu3)

# Solo mining:
create in data folder - file yenten.conf
```
rpcallow=127.0.0.1
server=1
daemon=1
rpcuser=user
rpcpassword=x
port=9981
rpcport=9982
```

In bat file cpuminer-opt
```
cpuminer-aes-sse42.exe -a yescryptr16 -o http://127.0.0.1:9982 -u user -p x --coinbase-addr=WALLET_ADDRESS
```

**Yenten donate address for developers team:**

YXandTfYjFC7fuR8h9aRCo5ZwAz4tvbvDL (bubasik)

YPf5UcG5gB1beJXK49h9aaycgg3H5SYSDW (ohashi3d)
