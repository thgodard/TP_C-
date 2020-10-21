#include <iostream>  // Inclusion d'un fichier standard
#include "Point.hpp" // Inclusion d'un fichier du répertoire courant

int Point::compteur = 0;

int Point::getX() {
  return x;
}

int Point::getY() {
  return y;
}

void Point::setX(int a){
    x = a;
}

void Point::setY(int a){
    y = a;
}

void Point::deplacerDe(int a, int b){
    x = x + a;
    y = y + b;
}

void Point::deplacerVers(int a, int b){
    setX(a);
    setY(b);
}

Point::Point(int a, int b){
    std::cout << "Point::Point(int, int)" << std::endl;
    setX(a);
    setY(b);
    ++compteur;
}

Point::Point(){
    std::cout << "Point::Point()" << std::endl;
}

int Point::getcompteur(){
    return compteur;
}