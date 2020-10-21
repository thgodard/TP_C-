#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle {
   // par défaut, tout est privé dans une "class"
private:
   int x;
   int y;
   int w;
   int h;

 public:
    Rectangle(int, int, int, int);
    std::string toString();

};

#endif