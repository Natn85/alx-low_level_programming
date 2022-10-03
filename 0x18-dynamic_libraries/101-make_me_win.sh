#!/bin/bash
wget -qP ../ https://github.com/osala-eng/alx-low_level_programming/raw/master/0x18-dynamic_libraries/mylib.so
export LD_PRELOAD="../mylib.so"
