#include "Forme.hpp"

Forme::Forme(){
    this->w = 0;
    this->h = 0;

    nbForme++;
}

Forme::Forme(int a, int b){
    this->w = a;
    this->h = b;

    nbForme++;
}

Forme::~Forme() {}