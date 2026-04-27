# letter-can

送信先を指定するためのCAN上のアドレッシングプロトコル。

## 前提

CAN 2.0B Activeの拡張フォーマットデータフレーム[^1]のIDを使用します。

[^1]: [はじめてのCAN/CANFD p20参照](https://cdn.vector.com/cms/content/know-how/VJ/PDF/For_Beginners_CAN_CANFD.pdf)

## ノードID

letter-can上の各ノードは8bitのIDを持つ必要があります。0x00は全てのノードを指定する最優先IDです。

## アドレッシングフォーマット

```plaintext
|未使用領域 13bit|送信元ID 8bit|送信先ID 8bit|
```

ID末尾に送信元及び送信先のノードIDを持ちます。
