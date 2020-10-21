#ifndef CERCLE_H
#define CERCLE_H

class Cercle {
   // par défaut, tout est privé dans une "class"
private:
   int x;
   int y;
   int w;
   int h;

 public:
   Cercle(int, int, int, int);
   Cercle(int, int, int);
   int getX();
   int getY();
   int getW();
   int getH();
   std::string toString();

};

#endif