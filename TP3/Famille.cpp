#include <iostream>
#include <string>
#include "Famille.hpp"

Famille::Famille(int taille){
    tab =  new Bavarde[taille];
}

Famille::~Famille(){
    delete [] tab;
}