# letter-can

## description

送信元及び送信先を指定するCAN上の単純なプロトコル。

## protcol

プロトコル上の各ノードは8bitのIDを持ち、識別に用います。

拡張フォーマットのデータフレーム[^1]より、ベースID11bitと拡張ID18bitを合わせた計29bitの内、先頭16bitを送信元、送信先の識別に用います(下図参照)。

```
|ベースID 11bit |拡張ID 18bit               |ペイロード(8byte)|
|ID 29bit                                  |                |
|送信元ID 8bit  |送信先ID 8bit  |余り13bit  |                |
```

[^1]: [はじめてのCAN/CANFD p20参照](https://cdn.vector.com/cms/content/know-how/VJ/PDF/For_Beginners_CAN_CANFD.pdf)
