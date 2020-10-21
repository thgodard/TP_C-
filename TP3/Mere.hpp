#ifndef MERE_HPP
#define MERE_HPP

class Mere {

  protected:
  std::string nom;

  public:

  int count = 0;
  Mere(std::string nom);
  ~Mere();
  int getCompteur();
  void getName();

  private:

};

#endif