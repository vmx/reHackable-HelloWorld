reMarkable minimal render example
=================================

A minimal example that renders "Hello World" on the reMarkable with QT using the original toolchain.

This is a simplified version of https://github.com/reHackable/reHackable-HelloWorld.

The build steps are quite simple (they are based on the [excellent build instructions from draft](https://github.com/dixonary/draft-reMarkable/blob/d0e21456ebf359188d73e31990a32f3de6a37c1a/INSTALL.md)

Get the reMarkable toolchain install script from https://remarkable.engineering/oecore-x86_64-cortexa9hf-neon-toolchain-zero-gravitas-1.8-23.9.2019.sh and install the toolchain. Once installed, activate the environment in within your terminal instance via `source  <path-to-installed-toolchain/environment-setup-cortexa9hf-neon-oe-linux-gnueabi`. Now you can run `qmake && make` and copy over the files `reHackable-launcher` and `Main.qml` to your reMarkable.

```console
$ wget https://remarkable.engineering/oecore-x86_64-cortexa9hf-neon-toolchain-zero-gravitas-1.8-23.9.2019.sh
$ chmod +x ./oecore-x86_64-cortexa9hf-neon-toolchain-zero-gravitas-1.8-23.9.2019.sh
$ ./oecore-x86_64-cortexa9hf-neon-toolchain-zero-gravitas-1.8-23.9.2019.sh
$ source <path-to-installed-toolchain/environment-setup-cortexa9hf-neon-oe-linux-gnueabi`
$ qmake && make
$ scp minimal-render Main.qml 10.11.99.1
```
