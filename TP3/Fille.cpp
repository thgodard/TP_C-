#include <iostream>
#include <string>
#include "Fille.hpp"

/*
Fille::Fille(){
    std::cout << "Constrution de fille " << std::endl;
}
*/

Fille::~Fille(){
    std::cout << "Tait-toi de fille " << std::endl;
}

Fille::Fille(): Mere("nom"){
    std::cout << "fille instancier"  << std::endl;
    count++;
}

void Fille::afficherName(){
    std::cout << "Nom : " << nom << std::endl;
}