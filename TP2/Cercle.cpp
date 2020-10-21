#include <iostream>  // Inclusion d'un fichier standard
#include "Cercle.hpp"

Cercle::Cercle(int xp, int yp, int wp, int hp){
    x = xp;
    y = yp;
    w = wp;
    h = hp;
}
   
Cercle::Cercle(int xp, int yp, int rp){
    x = xp;
    y = yp;
    w = rp*2;
    h = rp*2;
}

int Cercle::getX() {
  return x;
}

int Cercle::getY() {
  return y;
}

int Cercle::getW() {
  return w;
}

int Cercle::getH() {
  return h;
}
   
std::string toString(){
    std::cout << "CERCLE" Cercle::getX() 
}