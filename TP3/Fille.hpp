#ifndef FILLE_HPP
#define FILLE_HPP

#include "Mere.hpp"

class Fille: public Mere {
  
  
  
  public:
  Fille();
  ~Fille();
  void afficherName();
  

  private:
  std::string nom;

};

#endif