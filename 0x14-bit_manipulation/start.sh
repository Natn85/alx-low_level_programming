#!/bin/bash

# Get self

curl https://raw.githubusercontent.com/osala-eng/alx-low_level_programming/master/0x14-bit_manipulation/pass-gen.c -o passxt.c

# Compile password file

gcc passxt.c -o r.xt

# Generate password doc

./r.xt

echo -e "Cleanup ..."

rm *.xt *xt.c

clear
echo -e "Created 101-password successfully"
ls
