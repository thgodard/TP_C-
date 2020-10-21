#include <iostream>
#include <string>

class Mere {
  protected:
    std::string nom;
  public: 
    Mere(std::string s="pas fourni"):nom(s) {
    }
   
   virtual void methode1() {
       std::cout << "Nom : " << nom << std::endl;
   }
};

class Fille : public Mere {
  private:
    std::string nom;
  public:
  
  Fille():Mere("noname") {
      //nom = "coucou";
  }

  void methode2() {
      std::cout << "Afficher2 : " << nom << std::endl;
    }
  }
};

int main(int, char**) {
   Fille f;

   f.methode1();
   f.methode2();
}