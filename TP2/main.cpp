#include <iostream>
#include "Point.hpp"
#include "Rectangle.hpp"
#include "Cercle.hpp"

int main(int, char**) {
  Point p;

  p.setX(5);  
  p.setY(6);
  std::cout << p.getX() << std::endl;
  std::cout << p.getY() << std::endl;

  p.deplacerDe(2, 2);
  std::cout << p.getX() << std::endl;
  std::cout << p.getY() << std::endl;

  p.deplacerVers(3, 3);
  std::cout << p.getX() << std::endl;
  std::cout << p.getY() << std::endl;

  Point p1{4, 4};

  std::cout << p1.getX() << std::endl;
  std::cout << p1.getY() << std::endl;

  p1.deplacerDe(2, 2);
  std::cout << p1.getX() << std::endl;
  std::cout << p1.getY() << std::endl;

  p1.deplacerVers(2, 2);
  std::cout << p1.getX() << std::endl;
  std::cout << p1.getY() << std::endl;

  std::cout << Point::getcompteur() << std::endl;

  Point * pp = new Point(5, 5);

  std::cout << pp->getX() << std::endl;
  std::cout << pp->getY() << std::endl;

  pp->deplacerVers(2, 2);
  std::cout << pp->getX() << std::endl;
  std::cout << pp->getY() << std::endl;
  
  return 0;
}