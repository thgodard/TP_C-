#include <iostream>
#include <string>
#include "bavarde.hpp"
#include "couple.hpp"
#include "Famille.hpp"
#include "Fille.hpp"
#include "Mere.hpp"


void fonction(Bavarde b) {
  std::cout << "code de la fonction" << std::endl;
}


int main(int, char **) {

  int compteur;
  /*
  Bavarde b;
  Bavarde * p = new Bavarde(5);
  fonction(b);
  std::cout << Bavarde(0).get() << std::endl;
  
  
  const int TAILLE = 20;
  Bavarde   tab1[TAILLE];
  Bavarde * tab2 = new Bavarde[TAILLE];

  for (int i =0; i < TAILLE; ++i) 
  {
     tab1[i].afficher();
     tab2[i].afficher();
  }

  delete [] tab2;
  //delete p;


  Couple * p = new Couple(1,2);

  delete p;
  

  Famille  * tab = new Famille(5);

  delete [] tab;
  */

  Mere * b = new Mere("me");
  Fille r;
  compteur = r.getCompteur();
  std::cout << "Compteur : " + std::to_string(compteur) << std::endl;
  b->getName();

  delete b;


  return 0;
}
