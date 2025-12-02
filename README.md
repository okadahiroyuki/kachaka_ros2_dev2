# kachaka_ros2_pixi
- MacBook Pro M2 Max
- macOS Sequoia 15.3.2
- Docker Desktop 29.0.1

[Linux x86版はこちら]()


## 環境 (macOS) 設定
[Docker Desktop の Mac へのインストール](https://matsuand.github.io/docs.docker.jp.onthefly/desktop/mac/install/)を参考に、Docker Desktopの最新バージョンをインストールします。

ターミナルから下記のコマンドでDocker Desktopのバージョンを確認してください。
```
~ % docker version
Client: Docker Engine - Community
 Version:           28.4.0
...
...
```
<img width="1809" height="1297" alt="スクリーンショット 2025-12-02 20 03 42" src="https://github.com/user-attachments/assets/16fe13ca-f7ec-44b2-a336-acc9d02011b3" />



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
