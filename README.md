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





## カチャカAPIの準備
```
cd ~/
git clone https://github.com/pf-robotics/kachaka-api.git
```
公式サイトが提供するros2_bridgeはx86_64アーキテクチャのCPU上で実行させる仕様になっているので，
下記のようにarm64アーキテクチャのCPU上で実行させるDockerイメージをビルドする．
```
docker buildx build -t kachaka-api --target kachaka-grpc-ros2-bridge -f Dockerfile.ros2 . --build-arg BASE_ARCH=arm64 --load
```

次に，`tools/ros2_bridge/docker-compose.yaml`に対して以下の変更を行う．
```
変更前：image: "asia-northeast1-docker.pkg.dev/kachaka-api/docker/kachaka-grpc-ros2-bridge:${TAG}"
変更後：image: kachaka-api:latest
```

##
