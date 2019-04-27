## Welcome to Yenten Coin

![]({{site.baseurl}}/logo_top.png)

Yenten is a cryptocurrency of the cpu, by the cpu, for the cpu.
No ASIC mineable.


**Technical specifications:**
```
Algorithm: YespowerR16 (GPU is slower than CPU)
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
Version 3.1.0 win 64 bit - [yenten_win64_3_1_0.zip](https://github.com/yentencoin/yenten/releases/download/3.1.0/yenten_win64_3_1_0.zip)

Version 3.1.0 win 32 bit - [yenten_win32_3_1_0.zip](https://github.com/yentencoin/yenten/releases/download/3.1.0/yenten_win32_3_1_0.zip)

Version 3.1.0 mac - [Yenten_3_1_0_Qt.dmg](https://github.com/yentencoin/yenten/releases/download/3.1.0/Yenten_3_1_0_Qt.dmg)

> _Version 3.1.0 - Changes algorithm to YespowerR16 (Yespower-1.0, N=4096, r=16) - on and after 30 March, 2019 (UTC; unixtime:1553904000)._

**Miner:**

cpuminer-opt-ytn - [download](https://github.com/bubasik/cpuminer-opt-yespower/releases)

![]({{site.baseurl}}/yenten_countach.png)

### Links and other

**Fast_yenten** - quick and easy installation of a wallet - [on github](https://github.com/bubasik/fast_yenten/releases)

_Automatic installation Yenten wallet in folder c:\yenten with last blockchain. Fast run - 5 min._

**Bootstrap Yenten** (Download blockchain)

[http://yenten-pool.info/blocks_yenten_last.zip](http://yenten-pool.info/blocks_yenten_last.zip)

**Sample miner bat file for mining Yenten coin:**

```cpuminer-sse2.exe -a yespowerr16 -o stratum+tcp://cpu-pool.com:63368 -u WALLET_ADDRESS```

**Yenten pools:**

[http://cpu-pool.com/](http://cpu-pool.com/)

[https://ytn.firstpool.ru/](https://ytn.firstpool.ru/)

[http://cpumining.zapto.org/](http://cpumining.zapto.org/	)

[http://yenten-pool.info/](http://yenten-pool.info/)

**Yenten faucet:**

[http://yenten-pool.info/faucet/](http://yenten-pool.info/faucet/)

[http://shiganaiyenten.chocottokozukai.click/](http://shiganaiyenten.chocottokozukai.click/)

**Block Exporers:**

[https://ytn.overemo.com/](https://ytn.overemo.com/)

[http://explorer.yentencoin.info/](http://explorer.yentencoin.info/)

[http://cpumining.zapto.org/explorer/YTN](http://cpumining.zapto.org/explorer/YTN)

**Exchanges**

[https://crex24.com/ru/exchange/YTN-BTC](https://crex24.com/ru/exchange/YTN-BTC) BTC pair

[https://graviex.net/markets/ytnbtc](https://graviex.net/markets/ytnbtc) BTC pair

[https://trade.multicoins.org/market/MC-YNTN](https://trade.multicoins.org/market/MC-YNTN) MC pair

[https://trade.multicoins.org/market/BTC-YNTN](https://trade.multicoins.org/market/BTC-YNTN) BTC pair

[https://tradesatoshi.com/Exchange?market=YTN_BTC](https://tradesatoshi.com/Exchange?market=YTN_BTC) BTC pair

**Community links**

[Yenten forum](http://forum.yentencoin.info/)

[Yenten on Bitcointalk](https://bitcointalk.org/index.php?topic=5098631)

[Yenten on Reddit](https://www.reddit.com/r/Yenten/)

[Yenten on Twitter](https://twitter.com/yentencoin/)

[Russian Forum](https://forum.bits.media/index.php?/topic/61231-ytn-cpu-mining-yenten-v131-yescryptr16/&)

[Discord channels](https://discord.gg/RTbPxu3)

[Telegram russian](https://t.co/4rFhSIYt2P)

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

In bat file cpuminer-opt-ytn
```
cpuminer-aes-sse42.exe -a yespowerr16 -o http://127.0.0.1:9982 -u user -p x --coinbase-addr=WALLET_ADDRESS
```

### Yenten GUI miner

**Download** - [https://github.com/bubasik/yenten-gui-miner/releases](https://github.com/bubasik/yenten-gui-miner/releases)

**Guide:**
```
1) Download Yenten GUI miner
2) Unpack gui miner
3) Run file "download_miner.bat" for download cpuminer-opt
4) Run "Yenten_gui_miner.exe" to start GUI miner
5) Fill in the fields and click button "start mining!".
```

**Virus test:** https://www.virustotal.com/ru/file/f0bede56a9b5d4786f52f6373fb8e3d524037f093cb988dae482d8df1c0abe76/analysis/

*This miner was created for beginners.*

![screen](https://raw.githubusercontent.com/bubasik/yenten-gui-miner/master/gui_miner_screen.png)


## Yenten donate address for developers team:

YXandTfYjFC7fuR8h9aRCo5ZwAz4tvbvDL
