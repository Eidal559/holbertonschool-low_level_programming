#!/bin/bash
echo #include <stdio>.h> | gcc -x c -o program- ./program rm program
