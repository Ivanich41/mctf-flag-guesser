FROM renefonseca/wasmtime:latest

RUN apt update && apt install -y socat

COPY ./helloworld.wasm .

EXPOSE 7777
CMD socat TCP4-LISTEN:7777,reuseaddr,fork,keepalive SYSTEM:"wasmtime ./helloworld.wasm",pty,echo=0,end-close,rawer,stderr
