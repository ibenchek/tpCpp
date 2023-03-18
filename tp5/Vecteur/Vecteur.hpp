#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Vecteur  {
    double * data;
    int capacite;
    int size;

    public :
    Vecteur(int init_capacite = 10);
    Vecteur(const Vecteur & other);
    ~Vecteur();
};

 

#endif
