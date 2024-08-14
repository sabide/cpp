cmake_minimum_required(VERSION 3.10)

# Nom du projet
project(Vecteur3Project)

# Définit le standard C++ utilisé
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Ajoute les fichiers sources au projet
add_executable(Vecteur3NMain Vecteur3NMain.cpp Vecteur3 Vecteur3N)
