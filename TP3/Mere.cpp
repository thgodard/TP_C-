#include <iostream>
#include <string>
#include "Mere.hpp"

Mere::Mere(std::string nom){
    count++;
    nom = nom;
    std::cout << "Constrution de mere " << nom << std::endl;
}

Mere::~Mere(){
    std::cout << "Tait-toi de mere " << nom << std::endl;
}

int Mere::getCompteur(){
    return count;
}

void Mere::getName(){
    std::cout << "Nom : " << nom << std::endl;
}