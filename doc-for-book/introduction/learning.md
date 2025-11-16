HinaOSnの本の学習

## 双方向連結リスト

指定初期化子を使って構造体の初期化ができる。
(例)
struct element {
   int value;
   int value1;
};

struct element e1 = {.value = 1234, .value1 = 1234}


マクロを書くことでfor分的なのを書くことができる？？

LIST_FOR_EACH (elem, &my_list, struct element, link){
  INFO("%d\n", elem->value);
}


## リングバッファ

ようはキューのこと。
