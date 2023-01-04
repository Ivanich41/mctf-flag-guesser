FROM renefonseca/wasmtime:latest

RUN apt update && apt install -y socat

COPY ../code .

EXPOSE 7777
CMD socat TCP4-LISTEN:7777,reuseaddr,fork,keepalive SYSTEM:"wasmtime ./code",pty,echo=0,end-close,rawer,stderr
