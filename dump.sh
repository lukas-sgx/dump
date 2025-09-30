#!/bin/bash
##
## EPITECH PROJECT, 2025
## DUMP
## File description:
## DUMP
##

echo "INSTALLING PACKAGES FOR EPITECH'S PROJECT"
curl -L -o repo.zip https://github.com/lukas-sgx/dump/archive/refs/heads/main.zip
unzip main.zip
rm main.zip
echo ".gitignore" >> .gitignore
echo "push_that.sh" >> .gitignore