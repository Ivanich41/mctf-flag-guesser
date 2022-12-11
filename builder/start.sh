#!/bin/bash
docker run \
    -it --rm \
    -v $PWD:/src \ #place program to compile here
    --user root -e NB_UID=$UID -e NB_GID=$GID \
    webassemblytutor_helloworld \
    /bin/bash
