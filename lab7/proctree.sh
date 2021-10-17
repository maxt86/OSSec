#!/bin/bash
gcc -Wall -o $1 $1.c
./$1 &
pstree | grep $1
