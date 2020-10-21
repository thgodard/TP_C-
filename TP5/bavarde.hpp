#ifndef BAVARDE_HPP
#define BAVARDE_HPP

class Bavarde {
  
  int x;
  int count = 0;

  public:
  Bavarde(int a = 6);
  Bavarde(const Bavarde & b);
  ~Bavarde();
  int get();
  void afficher();
  
  private:

};

#endif