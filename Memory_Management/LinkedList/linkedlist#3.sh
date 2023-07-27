#!/bin/bash

cc -c -g linkedlist#3.c 
cc -c -g listgen.c 
cc  -o linkedlist#3 linkedlist#3.o listgen.o
./linkedlist#3
