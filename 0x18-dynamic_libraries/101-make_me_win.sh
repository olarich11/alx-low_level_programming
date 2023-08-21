#!/bin/bash
wget -P /tmp https://github.com/olarich11/alx-low_level_programming/raw/master/0x18-dynamic_libraries/programtest.so
export LD_PRELOAD=/tmp/programtest.so
