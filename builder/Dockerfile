#https://www.wasmtutor.com/webassembly-hello-world-guide

FROM debian:stretch-20190506-slim
RUN apt-get update \ 
   && apt-get install -y curl gnupg xz-utils apt-transport-https ca-certificates vim

RUN curl -O https://apt.llvm.org/llvm-snapshot.gpg.key \
   && apt-key add llvm-snapshot.gpg.key \
   && echo  "deb http://apt.llvm.org/stretch/ llvm-toolchain-stretch-9 main" >> /etc/apt/sources.list \
   && echo "deb-src http://apt.llvm.org/stretch/ llvm-toolchain-stretch-9 main" >> /etc/apt/sources.list \
   && apt-get update \
   && apt-get -y install clang-9 lld-9

RUN mkdir /wasi-src ; cd /wasi-src \ 
   && curl -O -L "https://github.com/CraneStation/wasi-sdk/releases/download/wasi-sdk-5/wasi-sdk-5.0-linux.tar.gz" ; mkdir wasi-sdk ; cd wasi-sdk ; tar -zxvf ../wasi-sdk-* 

RUN cd /wasi-src \
   && curl -O -L "https://github.com/CraneStation/wasi-sysroot/releases/download/v0.1-alpha/wasi-sysroot.tar.xz" ; mkdir wasi-sysroot ; cd wasi-sysroot ; tar -xvf ../wasi-sysroot.*

RUN update-alternatives --install /usr/bin/clang clang /usr/bin/clang-9 100 \
   && update-alternatives --install /usr/bin/clang++ clang++ /usr/bin/clang++-9 100 \
   && update-alternatives --install /usr/bin/wasm-ld wasm-ld /usr/bin/wasm-ld-9 100

RUN dirname `clang --target=wasm32-wasi -print-libgcc-file-name` | xargs mkdir \
    && clang --target=wasm32-wasi -print-libgcc-file-name | xargs cp /wasi-src/wasi-sdk/wasi-sdk-5.0/opt/wasi-sdk/lib/clang/8.0.0/lib/wasi/libclang_rt.builtins-wasm32.a 

CMD ["/bin/bash"]
WORKDIR /src
