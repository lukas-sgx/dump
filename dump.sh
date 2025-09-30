#!/bin/bash
##
## EPITECH PROJECT, 2025
## DUMP
## File description:
## DUMP
##

echo "INSTALLING PACKAGES FOR EPITECH'S PROJECT"
curl -L -o repo.zip https://github.com/lukas-sgx/dump/archive/refs/heads/master.zip
if [ $? -ne 0 ]; then
    echo "❌ Erreur lors du téléchargement."
    exit 1
fi
unzip -q repo.zip -d ..
rm repo.zip
rm dump.sh
{
    echo ""
    echo ".gitignore"
    echo "push_that.sh"
} >> .gitignore
echo "✅ Installation terminée."