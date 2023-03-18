#include "Vecteur.hpp"
#include "catch.hpp"
#include <cstring>
#include <algorithm>

Vecteur::Vecteur() {
    capacite = 10;
    taille = 0;
    data = new double[capacite];
}

Vecteur::Vecteur(int init_capacite){
    capacite = init_capacite;
    taille = 0;
    data = new double[capacite];
}

Vecteur::Vecteur(const Vecteur& other){
    capacite = other.capacity();
    taille = other.size();
    data = new double[capacite];
    std::copy(other.data, other.data + taille, data);
}

Vecteur& Vecteur::operator=(const Vecteur &other){
    if (this != &other){
        taille = other.taille;
        capacite = other.capacite;
        delete [] data;
        data = new double[capacite];
        std::memcpy(data, other.data, taille*sizeof(double));   
    }
}

Vecteur::~Vecteur(){
    delete [] data;
}

int Vecteur::capacity() const {
    return capacite;
}

int Vecteur::size() const {
    return taille;
}

void Vecteur::push_back(double value){
    if(taille == capacite){
        capacite *= 2;
        double * new_data = new double[capacite];
        std::copy(new_data, new_data + taille, data);
        data[taille] = value;
        taille += 1;
    }
    data[taille] = value;
    taille += 1;
}