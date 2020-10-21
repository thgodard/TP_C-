#include <iostream>
#include <string>
#include "couple.hpp"

Couple::Couple(int a, int b) : 
    a(a), 
    b(b)
    {
    std::cout << "Constrution de couple " + std::to_string(a) << std::endl;
    std::cout << "Constrution de couple " + std::to_string(b) << std::endl;
}

Couple::~Couple(){
    std::cout << "Tait-toi couple " + std::to_string(a.get()) + " " + std::to_string(b.get()) << std::endl;
}