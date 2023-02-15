#include "Forme.hpp"
#include <iostream>

using std::cout;
using std::endl;

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

void Forme::afficher(){
    cout << "Largeur: " << this->w << "&" << "Hauteur: " << this->h << '\n';
}

void afficher1(Forme f){
    f.afficher();
}

void afficher2(Forme &f){
    f.afficher();
}

void afficher3(Forme *f){
    f->afficher();
}