#include <iostream>
#include <string>
#include "bavarde.hpp"

void fonction(Bavarde b) {
  std::cout << "code de la fonction" << std::endl;
}


void test1(Bavarde b) {
  std::cout << "appel de fonction avec parametre objet et copie" << std::endl;
}

Bavarde test2a() {
  std::cout << "appel de fonction avec retour" << std::endl;
  return Bavarde(); // creation d'un objet local
} // plus de copie - voir ZZ3

Bavarde test2b() {
  Bavarde b; // creation d'un objet local
  std::cout << "appel de fonction avec retour" << std::endl;
  return b; 
} // plus de copie - ZZ3 

void test3(Bavarde& b) {
  std::cout << "appel de fonction avec référence " << std::endl;;
}

void test4(Bavarde *b) {
  std::cout << "appel de fonction avec un pointeur sur un objet" << std::endl;
}

int main(int, char **) {

  Bavarde b;

  test4(& b);


  return 0;
}
