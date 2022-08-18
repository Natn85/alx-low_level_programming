#!/bin/bash


# Compile password file

gcc pass-gen.c -o r

# Generate password doc

./r

# cleanup

mv -p 101-password ../
cd ..
rm -rf password
