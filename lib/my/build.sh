#!/usr/bin/env bash
##
## EPITECH PROJECT, 2025
## build
## File description:
## build mylib
##

gcc -c *.c
ar rc libmy.a *.o
rm *.o
