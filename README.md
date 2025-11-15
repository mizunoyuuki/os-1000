env.shの作成


env.sh
env.sh

以下のようにhomebrew経由でインストールしたものが使えるようになる。
➜  os-1000 /opt/homebrew/opt/llvm/bin/clang --version
Homebrew clang version 21.1.5
Target: arm64-apple-darwin24.6.0
Thread model: posix
InstalledDir: /opt/homebrew/Cellar/llvm/21.1.5/bin
Configuration file: /opt/homebrew/etc/clang/arm64-apple-darwin24.cfg

通常は以下のようになる。

➜  os-1000 git:(main) ✗ clang --version
Apple clang version 16.0.0 (clang-1600.0.26.6)
Target: arm64-apple-darwin24.6.0
Thread model: posix
InstalledDir: /Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin
