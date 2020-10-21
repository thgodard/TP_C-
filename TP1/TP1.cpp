#include <iostream>
#include <string>

/*
int main(int , char ** ) {
  int i;

  for(i=0; i< 120; ++i)
    std::cout << "Bonjour les ZZ" << 2 << std::endl;

  return 0;
}
*/
/*
int main(int, char **) {  // parametres muets
  std::string prenom; 
  std::string nom;    // type chaines de caracteres"
  int age;

  std::cout << "Quel est votre prénom ?" << std::endl;
  std::cin  >> prenom;
  std::cout << "Quel est votre nom ?" << std::endl;
  std::cin  >> nom;
  std::cout << "Quel est votre age ?" << std::endl;
  std::cin  >> age ;
  std::cout << "Bonjour "<< prenom <<":"<< nom << std::endl;

  return 0;
}
*/
/*
int main(int, char **){
    std::string mot1;
    std::string mot2;
    int taille1, taille2;
    std::cout << "Mot 1:" << std::endl;
    std::cin  >> mot1;
    std::cout << "Mot 2:" << std::endl;
    std::cin  >> mot2;
    taille1 = mot1.size();
    taille2 = mot2.size();
    std::cout << "taille du mot1 : " << taille1 << std::endl;
    std::cout << "taille du mot2 : " << taille2 << std::endl;
    if (mot1 < mot2){
        std::cout << "le mot le plus petit est " << mot1 << std::endl;
    }
    else{
        std::cout << "le mot le plus petit est " << mot2 << std::endl;
    }
    
    return 0;
}
*/


//using std::cout;
//using std::endl;

/* on peut utiliser le mot clé const pour définir la taille d'un tableau statique en C++ */
/* Jamais de #define pour cela */
/*
const int TAILLE = 10;

int main(int, char **) {
  int tab[TAILLE];
  
  for (int i=0; i < TAILLE; ++i) {
    tab[i] = i %2;
    cout << tab[i] << " ";
  }

  cout << endl;

  return TAILLE;
}
*/
/*
int main() {

  char s[10];
  // std::string s;
  //char *      s;

  std::cin >> s;

  std::cout << "#" << s << "#" << std::endl;
  for (int i = 0; i< 10; ++i)
    std::cout << "@" << s[i] << "@" << (int)s[i] << "@" << std::endl;

  return 0;
}
*/
/*
int main(){
int  a = 5;
int &r = a;

std::cin  >> r;
std::cout << a;

return 0;
}
*/
/*
void fonction1(int a) {
  std::cout << &a << std::endl;
}

void fonction2(int& a) {
  std::cout << &a << std::endl;
}

int main(int, char **) {
  int age = 45;

  std::cout << &age << std::endl;
  fonction1(age);
  fonction2(age);

  return 0;
}
*/
/*
void echange1(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

void echange2(int &a, int &b){
    int c = a;
    a = b;
    b =c;
}

int main(){
    int  a = 3;
    int  b = a;
    int& c = a;

    std::cout << a << " " << b << " " << c << std::endl;
    b = 4;
    std::cout << a << " " << b << " " << c << std::endl;
    echange1(&a,&b);
    std::cout << a << " " << b << " " << c << std::endl;
    echange2(a,b);
    std::cout << a << " " << b << " " << c << std::endl;

    return 0;
 }
 */

/*
int main(){
    int   a = 4;
    int * p = nullptr;

    p = &a;
    std::cout << *p << " " << p;
    return 0;
}
*/
/*
int main(int, char**) {
   int * p = new int;

   *p = 3;
   std::cout << *p << std::endl;
    
    delete p;

   return 0;
}
*/

int main(int, char**) {
   const int TAILLE = 500;

   int * p = new int[TAILLE];

   for(auto i = 0; i< TAILLE; ++i ) p[i] = i;
   for(auto i = 0; i< TAILLE; ++i ) std::cout << p[i] << std::endl;
    
   delete [] p;

   return 0;
}