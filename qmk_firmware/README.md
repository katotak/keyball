# QMK Firmware with Docker

Dockerを使用してQMKファームウェアをビルドする方法

## 前提条件

- Dockerがインストールされていること
- docker-composeが利用可能なこと

## ビルド方法

1. プロジェクトのルートディレクトリに移動:

```bash
cd /path/to/qmk_firmware
```

2. デフォルト設定でビルド実行 (keyball39 + katotakキーマップ):

```bash
docker compose run --rm qmk
```

3. 別のキーボード/キーマップでビルドする場合:

```bash
# 環境変数でキーボード(kb)とキーマップ(km)を指定
docker compose run --rm -e kb=keyball/keyball44 -e km=default qmk
```

## ビルド成果物

ビルドされたファームウェアは`.build/`ディレクトリ以下に生成されます。

## サポートされているキーボード/キーマップ

- キーボード (kb環境変数):
  - keyball/keyball39
  - keyball/keyball44  
  - keyball/keyball61
  - keyball/keyball46
  - keyball/one47

- キーマップ (km環境変数):
  - default
  - via  
  - test
  - katotak
  - develop

## 注意事項

- 初回実行時はDockerイメージのビルドに時間がかかります
- ビルド後はコンテナが自動で削除されます
- デフォルトのキーボードはkeyball39、キーマップはkatotakです
