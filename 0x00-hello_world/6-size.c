#!/bin/bash
gcc -masm=intel -o $(basename $CFILE .c).s $CFILE
