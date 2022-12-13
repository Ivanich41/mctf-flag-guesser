#!/bin/sh
name="test"
docker run \
  --rm \
  -v $(pwd):$(pwd) \
  -u $(id -u):$(id -g) \
  wasienv/wasienv \
  wasic++ `pwd`/$name.cpp -o `pwd`/$name.wasm
cp $name.wasm ../app/