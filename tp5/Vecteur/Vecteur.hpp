#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Vecteur  {
    double * data;
    int capacite;
    int taille;

    public :
    Vecteur();
    Vecteur(int);
    Vecteur(const Vecteur &);
    ~Vecteur();

    int capacity() const;
    int size() const;
    void push_back(double value);
};

 

#endif
