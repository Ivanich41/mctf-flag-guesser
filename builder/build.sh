#!/bin/sh
name="test"
docker run --rm -v `pwd`:`pwd` wasienv/wasienv wasic++ `pwd`/$name.cpp -o `pwd`/$name.wasm
#cp $name.wasm ../app/