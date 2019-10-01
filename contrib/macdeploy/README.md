### MacDeploy ###
//With old macdeployqtplus file START--------------------------------------------------------------------
You will need the appscript package for the fancy disk image creation to work:

	sudo easy_install appscript

For Snow Leopard (which uses [Python 2.6](http://www.python.org/download/releases/2.6/)), you will need the param_parser package:
	
	sudo easy_install argparse

This script should not be run manually, instead, after building as usual:

	make deploy

During the process, the disk image window will pop up briefly where the fancy
settings are applied. This is normal, please do not interfere.

When finished, it will produce `Bitcoin-Qt.dmg`.
//With old macdeployqtplus file END----------------------------------------------------------------------

//macdeployqtplus patched file Instructions:
Mac OS X Build Instructions:

The commands in this guide should be executed in a Terminal application. 
The built-in one is located in /Applications/Utilities/Terminal.app
Preparation:

Install the OS X command line tools.
in Terminal:
    xcode-select --install
(When the popup appears, click Install.)

Next install Homebrew https://brew.sh/
in Terminal:
    /usr/bin/ruby -e "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/master/install)"

Dependencies:
in Terminal:
    brew install automake berkeley-db4 libtool boost --c++11 miniupnpc openssl pkg-config protobuf --c++11 qt5 libevent 
    brew install librsvg imagemagick libtiff

Build Yenten Core:
in Terminal:
    git clone https://github.com/yentencoin/yenten
    cd yenten
    ./autogen.sh
    ./configure
    make

To build and run the unit tests:
in Terminal:
    make check

To create a .dmg that contains the .app bundle with Yenten Wallet:
in Terminal:
   make deploy

When finished, it will produce `Yenten-Qt.temp.dmg` and Yenten-Qt.app in main directory. 
