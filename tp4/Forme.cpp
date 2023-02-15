#include "Forme.hpp"
#include <iostream>

using std::cout;
using std::endl;

int Forme::nbForme =0;


Forme::Forme(){
    id = 0;

    p = Point{};

    this->w = 0;
    this->h = 0;

    this->couleur = COULEURS::BLANC;

    this->nbForme++;
}

Forme::Forme(Point pt, COULEURS c){
    p = pt;

    w = 0;
    h = 0;
    
    couleur = c;

    nbForme++;
}

Forme::Forme(Point pt, int lar, int hau, COULEURS c){
    this->p = pt;

    this->w = lar;
    this->h = hau;

    this->couleur = c;

    this->nbForme++;
}

Forme::~Forme() {}


int Forme::prochainId(){
    return nbForme;
}

int Forme::getId(){
    return id;
}

int Forme::getLargeur(){
    return w;
}

int Forme::getHauteur(){
    return h;
}

void Forme::setX(int a){
    p.setX(a);
}

void Forme::setY(int b){
    p.setY(b);
}

Point Forme::getPoint(){
    return p;
}

COULEURS Forme::getCouleur(){
    return couleur;
}

void Forme::setCouleur(COULEURS c){
    couleur = c;
}
