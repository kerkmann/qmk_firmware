#!/usr/bin/env bash

MAX_RETRY=60
SIDE=${1:-}

if [[ "$SIDE" != "left" && "$SIDE" != "right" ]]; then
    echo "Usage: ./flash.sh <left|right>"
    exit 1
fi

./util/docker_build.sh sofle:kerkmann:uf2-split-${SIDE}
mkdir -p /tmp/flash

counter=0
until sudo mount /dev/disk/by-label/RPI-RP2 /tmp/flash 2> /dev/null
do
   sleep 1
   [[ counter -eq $MAX_RETRY ]] && echo "Failed, couldn't find any mountable keyboard within $MAX_RETRY attemps!" && exit 1
   echo "There is no mountable keyboard, trying again. Try #$counter"
   ((counter++))
done

sudo cp sofle_rev1_kerkmann.uf2 /tmp/flash
sudo umount /tmp/flash

du -hs sofle_rev1_kerkmann.uf2
