# letter-can

送信先を指定するためのCAN上のアドレッシングプロトコル。

## 前提

CAN 2.0B Activeの拡張フォーマットデータフレーム[^1]のIDを使用します。

[^1]: [はじめてのCAN/CANFD p20参照](https://cdn.vector.com/cms/content/know-how/VJ/PDF/For_Beginners_CAN_CANFD.pdf)

## ノード識別子

letter-can上の各ノードは8bitの識別子を持つ必要があります。0x00は全てのノードを指定する最優先識別子です。

## プロトコル

```plaintext
|未使用領域 13bit|送信元識別子 8bit|送信先識別子 8bit|
```

ID末尾に送信元及び送信先のノード識別子を持ちます。
