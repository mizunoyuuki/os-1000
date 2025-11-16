Risc-vのレジスタ

 satpレジスタ：実行中プロセスのページテーブルへの物理アドレスを格納している。
 sret, mret: supervisorモード、machieneモードからユーザープロセスに戻る時に実行する命令。
 uモードからシステムコールや例外の何かが発生した場合は、sモードへ実行権限が上がる。その時に現在のpcをepcレジスタ？exception program counterに待避する。そして、sretとかで例外処理前に実行していたpcを戻す。satpとかも戻す。

