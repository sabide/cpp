#!/bin/bash

docmd(){
echo "$1"
$1
}

# Options de build sous gcc
# -Wall active tous les warnings
# -O2 active l'optimiseur

# Choix du compilateur
# CC="clang++ -std=c++20 -lpthread -pthread $OPT"
OPT=""
CC="g++ -std=c++20 -lpthread -pthread $OPT"

build() {
docmd "$CC -Wall -O2 -o main $1"
}

build "Vecteur3NMain.cpp Vecteur3N.cpp Vecteur3.cpp"
