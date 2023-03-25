#!/usr/bin/env bash

sed -i 's/^\/\/ #define MASTER_RIGHT/#define MASTER_RIGHT/g' keyboards/sofle/keymaps/kerkmann/config.h
sed -i 's/^#define MASTER_LEFT/\/\/ #define MASTER_LEFT/g' keyboards/sofle/keymaps/kerkmann/config.h

./flash.sh
