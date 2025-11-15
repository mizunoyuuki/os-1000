Supervisor Binary Interface

RISC-VのOSを実装する上で非常に便利なのが、Supervisor Binary Interface(SBI)。
SBIはいわば、「カーネルのためのAPI」。APIが文字の表示やファイルの読み書きといったアプリケ>ションに提供する機能を定義しているように、SBIはファームウェアがOSに提供するきのうを定義している。

Githubで仕様書が公開されているらしい。https://github.com/riscv-non-isa/riscv-sbi-doc/releases
