#include <iostream>
#include <string>
#include "bavarde.hpp"

Bavarde::Bavarde(int a){
  x = a;
  std::cout << "Constrution de " + std::to_string(a) << std::endl;
}

Bavarde::Bavarde(const Bavarde & b ){
  std::cout << "Construction copie " << std::endl;
}

Bavarde::~Bavarde(){
    std::cout << "Tait-toi " + std::to_string(x) << std::endl;
}

int Bavarde::get(){
  return x;
}

void Bavarde::afficher(){
  std::cout << "Affichage de " + std::to_string(x) << std::endl;
}

