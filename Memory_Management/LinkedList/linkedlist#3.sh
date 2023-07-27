#!/bin/bash

cc -c -g linkedlist.c 
cc -c -g listgen.c 
cc  -o linkedlist linkedlist.o listgen.o
./linkedlist
