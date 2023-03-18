#include "Vecteur.hpp"
#include "catch.hpp"
#include <cstring>
#include <algorithm>

Vecteur::Vecteur(int init_capacite) {
    capacite = init_capacite;
    size = 0;
    data = new double[capacite];
}

Vecteur::Vecteur(const Vecteur & other){
    capacite = other.capacite;
    size = other.size;
    data = new double[capacite];
    std::copy(other.data, other.data + size, data);
}

Vecteur::~Vecteur(){
    delete [] data;
}