# カチャカをROS2で開発する
[kachaka_ros2_dev_kit](https://github.com/CyberAgentAILab/kachaka_ros2_dev_kit)
はカチャカを用いたROS 2ソフトウェア開発キットです。以下のパッケージ群から構成されています。

- kachaka_description	: カチャカのdescriptionを記述するパッケージ。kachaka_descriptionから派生しています。
- kachaka_interfaces	: カチャカのアクション、メッセージファイルを管理するパッケージ。kachaka_interfacesから派生しています。
- kachaka_nav2_bringup:	Nav2 stackを起動するためのパッケージ。kachaka_nav2_bringupから派生しています。
- kachaka_mapping :	Mappingを起動するためのパッケージ
- kachaka_gazebo :	Gazebo Ignitionによるカチャカのシミュレーション環境を提供するパッケージ
- utils/joy_controller :	ユーティリティ

kachaka_ros2_dev_kitは、カチャカ実機、シミュレーション環境で地図生成、自己位置推定、ナビゲーションを実行する機能を提供します。 



このリポジトリでは[kachaka_ros2_dev_kit](https://github.com/CyberAgentAILab/kachaka_ros2_dev_kit)をベースにした
カチャカの開発環境を整えます．

ホストPCが
- Ubuntu 24.04 Jazzy
- macOS osx-arm64 
- Windows11

仮想環境は
- Pixi で
- Dockerで

カチャカは
- 実機で
- シミュレーションで


# 参考にした
[ROSCon JP 2025 Lightning Talk カチャカを使った研究開発](https://roscon.jp/presentations/lt05.pdf)

公式サイト[kachaka API](https://github.com/pf-robotics/kachaka-api?tab=readme-ov-file)

# 開発環境の構築
## ホストがUbuntu 24.04の場合 
### 直接インストールする（非推奨）
[kachaka_ros2_dev_kit](https://github.com/CyberAgentAILab/kachaka_ros2_dev_kit)の指示に従ってインストール，実行が可能．
- Ubuntu 24.04
- ROS 2 Jazzy
- Gazebo Harmonic
- カチャカソフトウェア v3.8.5
- GPUが望ましい

### Dockerを使う
#### インストール
#### シミュレーションで動作確認
#### 実機で動作確認


### Pixiを使う
#### インストール
#### シミュレーションで動作確認
#### 実機で動作確認



## ホストがmacOS osx-arm64の場合
### Dockerを使う
#### インストール
#### シミュレーションで動作確認
#### 実機で動作確認

### Pixiを使う
#### インストール
#### シミュレーションで動作確認
#### 実機で動作確認



## ホストがWindows11の場合
WSL?

Windowsマシンを持ってないので・・・誰かお願い




# シミュレーションで開発する


# 実機で開発する







