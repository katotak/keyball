# Keyball39 ファームウェア

## ファームウェアの書き込み

[当ブランチ](https://github.com/katotak/qmk_firmware/tree/keyball)を `git checkout` するかダウンロードした後に、以下のコマンドを実行しファームウェアをビルドする。

```
make keyball/keyball39:katotak
```

[Pro Micro Web Updater](https://sekigon-gonnoc.github.io/promicro-web-updater/index.html)や[QMK Toolbox](https://kbd.dailycraft.jp/claw44/buildguide/10_firmware/toolbox/)でファームウェアをPro Microに書き込む。

## カスタムキー

|キー|Keycode|RemapでのKeycode|Code(hex)|説明|
|:--|:--|:--|:--|:--|
|マウスボタン1|KC_MY_BTN1|User 0|0x5DAF||
|マウスボタン2|KC_MY_BTN2|User 1|0x5DB0||
|マウスボタン3|KC_MY_BTN3|User 2|0x5DB1||
|スクロールボタン|KC_MY_SCR|User 3|0x5DB2|このキーを押している際はトラックボールの入力はスクロールとして扱われる。|
|レイヤー変更しきい値減少|KC_TO_CLICKABLE_INC|User4|0x5DB4|トラックボールレイヤーを有効にするためのトラックボール必要移動量のしきい値を下げる。最小は5。|
|レイヤー変更しきい値増加|KC_TO_CLICKABLE_DEC|User5|0x5DB3|トラックボールレイヤーを有効にするためのトラックボール必要移動量のしきい値を上げる。|
|縦スクロール方向の反転|KC_SCROLL_DIR_V|User6|0x5DB5?|スクロールボタンを押した際のトラックボールの縦スクロールの方向を反転する。|
|横スクロール方向の反転|KC_SCROLL_DIR_H|User7|0x5DB6?|スクロールボタンを押した際のトラックボールの横スクロールの方向を反転する。|
