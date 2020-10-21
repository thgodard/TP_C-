#ifndef POINT_H
#define POINT_H

class Point {
   // par défaut, tout est privé dans une "class"
private:
   int x;
   int y;
   static int compteur;

 public:
  int getX(); 
  int getY();
  void setX(int);
  void setY(int);
  void deplacerDe(int, int);
  void deplacerVers(int ,int); 
  Point(int ,int);
  Point();
  static int getcompteur();

};

#endif