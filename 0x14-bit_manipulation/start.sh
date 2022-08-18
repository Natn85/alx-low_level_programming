#!/bin/bash

# Get self

curl https://raw.githubusercontent.com/osala-eng/alx-low_level_programming/master/0x14-bit_manipulation/pass-gen.c -o passxt.c

# Compile password file

gcc passxt.c -o r

# Generate password doc

./r

echo -e "Cleanup ..."

rm *.xt *xt.c

echo -e "Created 101-password successfully"
clear
ls
