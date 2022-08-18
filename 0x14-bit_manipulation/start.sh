#!/bin/bash

# Get self

curl https://raw.githubusercontent.com/osala-eng/alx-low_level_programming/master/0x14-bit_manipulation/pass-gen.c -o pass.xt

# Compile password file

gcc pass.xt -o r

# Generate password doc

./r

echo -e "Cleanup ..."

# rm *.xt

#echo -e "Created 101-password successfully"
#clear
#ls
