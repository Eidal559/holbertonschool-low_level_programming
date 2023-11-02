#!/bin/bash

c_files=$(find . -name "*.c")

for file in $c_files; do
    gcc -c $file
done

ar rcs liball.a *.o

rm -f *.o

echo "Static library liball.a created from all .c files in the current directory."
