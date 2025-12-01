# kachaka_ros2_pixi
- macOS

[Linux x86版はこちら]()



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
