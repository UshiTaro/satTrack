# 人工衛星を追尾する奴~ｗｗｗ
## 概要
Orbitronと連携して人工衛星を追尾する架台の制御用のスケッチです
詳しくは[こちら](http://ushi.ml/sat/index.html)をご覧ください．
## 使いかた
1. Orbitron等の軌道計算ソフトウェアを用意する
2. ドライバーとしてDDEOrbitronToSerialを用意する
3. シリアルの出力は `[AZ],[EL],`，改行付きにする
4. ArduinoのD9に方位角，D10に仰角方向のサーボを接続
## ライセンス
LICENSE.txtを見てね
