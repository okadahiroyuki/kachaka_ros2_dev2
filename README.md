# kachaka_ros2_pixi
- MacBook Pro M2 Max
- macOS Sequoia 15.3.2
- Docker Desktop 29.0.1

[Linux x86版はこちら]()


## Docker Desktop (macOS）の設定
### Docker Desktopのインストール
[Docker Desktop の Mac へのインストール](https://matsuand.github.io/docs.docker.jp.onthefly/desktop/mac/install/)を参考に、Docker Desktopの最新バージョンをインストールします。

ターミナルから下記のコマンドでDocker Desktopのバージョンを確認してください。
```
~ % docker version
Client: Docker Engine - Community
 Version:           28.4.0
...
...
```
### Docker Dockerの起動とネットワークの設定
アプリケーションから「Docker.app」をクリックして起動します。

[Setting]メニューの[Resources]から[Network]を選び、[Enable host networking]にチェックを入れます。
<img width="1809" height="1297" alt="スクリーンショット 2025-12-02 20 03 42" src="https://github.com/user-attachments/assets/16fe13ca-f7ec-44b2-a336-acc9d02011b3" />

画面右下の[Apply & restart]をクリックして、変更を反映させて再起動してください。

### 動作確認
下記のコマンドを実行することでインストールしたDocker Desktopの動作を確認できます。
```
% docker run hello-world
Unable to find image 'hello-world:latest' locally
latest: Pulling from library/hello-world
198f93fd5094: Pull complete 
Digest: sha256:f7931603f70e13dbd844253370742c4fc4202d290c80442b2e68706d8f33ce26
Status: Downloaded newer image for hello-world:latest

Hello from Docker!
This message shows that your installation appears to be working correctly.

To generate this message, Docker took the following steps:
 1. The Docker client contacted the Docker daemon.
 2. The Docker daemon pulled the "hello-world" image from the Docker Hub.
    (arm64v8)
 3. The Docker daemon created a new container from that image which runs the
    executable that produces the output you are currently reading.
 4. The Docker daemon streamed that output to the Docker client, which sent it
    to your terminal.

To try something more ambitious, you can run an Ubuntu container with:
 $ docker run -it ubuntu bash

Share images, automate workflows, and more with a free Docker ID:
 https://hub.docker.com/

For more examples and ideas, visit:
 https://docs.docker.com/get-started/
```

## カチャカAPIの有効化（カチャカ本体)
- カチャカに接続し、[設定]のタブから接続するロボットを選択、[カチャカAPI]ページを開いて「カチャカAPIを有効化する」をONにします。
- ダイアログが表示されるので、「利用規約」を確認の上、「カチャカAPI利用規約に同意する」をチェックして「設定する」を押して下さい。
- [設定] > [アプリ情報] からカチャカのIPアドレスをメモしておいてください。
- kachaka-<シリアル番号>.localというホスト名でもアクセス可能です。

詳細は[カチャカAPI](https://github.com/pf-robotics/kachaka-api)のページを参照してください。


## カチャカAPIのインストール
## ダウンロード
[カチャカAPI](https://github.com/pf-robotics/kachaka-api)は、カチャカのドッキングや移動を制御したり、カチャカの状態やセンサー値を取得したりするための機能を提供します。

ここでは、[ROS 2でカチャカAPIを利用する](https://github.com/pf-robotics/kachaka-api/blob/main/docs/ROS2.md) に従って進めます。

公式サイトからカチャカAPI一式をダウンロードします。
```
% cd ~/
% git clone https://github.com/pf-robotics/kachaka-api.git
```

## カチャカROS2ブリッジのビルド
公式サイトが提供するros2_bridgeはx86_64アーキテクチャのCPU上で実行させる仕様になっているので，
下記のようにmacOSのarm64アーキテクチャのCPU上で実行させるDockerイメージをビルドする．
```
% cd ~/kachaka-api
% docker buildx build -t kachaka-api --target kachaka-grpc-ros2-bridge -f Dockerfile.ros2 . --build-arg BASE_ARCH=arm64 --load
```
## カチャカROS2ブリッジの実行
`tools/ros2_bridge/docker-compose.yaml`に対して以下の変更を行ってください。
```
% cd ~/kachaka-api/tools/ros2_bridge
% nano docker-compose.yaml

変更前：image: "asia-northeast1-docker.pkg.dev/kachaka-api/docker/kachaka-grpc-ros2-bridge:${TAG}"
変更後：image: kachaka-api:latest
```

変更したdocker-compose.yamlを保存したら、下記のようにカチャカROS2ブリッジを実行してください。

```
% cd ~/kachaka-api/tools/ros2_bridge
% ./start_bridge.sh  <カチャカのIPアドレス>
WARN[0000] /Users/roboworks/kachaka-api/tools/ros2_bridge/docker-compose.yaml: the attribute `version` is obsolete, it will be ignored, please remove it to avoid potential confusion 
[+] Running 1/1
 ✔ Container ros2_bridge-ros2_bridge-1  Recreated                          0.0s 
Attaching to ros2_bridge-1
ros2_bridge-1  | [INFO] [launch]: All log files can be found below /tmp/2025-12-02-11-37-37-758448-docker-desktop-1419
...
...
ros2_bridge-1  | [component_container_mt-1] [INFO] [1764675827.591438341] [kachaka.dynamic_tf]: get stub
```
エラーが出力されなければ、カチャカROS2ブリッジは正常に起動しています。

## 動作の確認
先ほど起動した、カチャカROS2ブリッジのコンテナを利用してカチャカからのトピックを確認できます。

トピック一覧の取得
```
% docker exec -it ros2_bridge-ros2_bridge-1 /opt/kachaka/env.sh ros2 topic list
/kachaka/back_camera/camera_info
/kachaka/back_camera/image_raw
/kachaka/back_camera/image_raw/camera_info
/kachaka/back_camera/image_raw/compressed
...
...
/parameter_events
/rosout
/tf
/tf_static
```

目的地一覧の取得
```
% docker exec -it ros2_bridge-ros2_bridge-1 /opt/kachaka/env.sh ros2 topic echo /kachaka/layout/locations/list
locations:
- id: L02
  name: 机
  type: 0
  pose:
    x: -2.254146
    y: -1.649221
    theta: -2.077323
- id: L03
  name: 冷蔵庫
  type: 0
  pose:
    x: -2.834408
    y: -3.685969
    theta: 0.011462
```
カチャカに登録してある目的地の情報が得られれば成功です。


## ROS2環境で開発を行う
macOSでROS2開発を行うには２つの方法があります。

1. pixi でROS2環境を構築する
3. Docker Desktop でROS2環境を構築する

