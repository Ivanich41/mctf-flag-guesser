#!/bin/sh
clang --target=wasm32-wasi --sysroot=/wasi-src/wasi-sysroot/sysroot testprogram.c -o testprogram.wasm
