#ifndef BAVARD_HPP
#define BAVARD_HPP
#define TAILLE 5

#include <cstdlib>
#include <iostream>

extern int cptc;
extern int cptd;

class Bavarde{
    int a;

    public :
        Bavarde();
        Bavarde(int);
        ~Bavarde();

        int getA();

        void setA(int);
        
        void afficher();
};

class Couple{
    Bavarde b1;
    Bavarde b2;

    public :
        Couple();
        Couple(Bavarde, Bavarde);
        ~Couple();
};

class Famille{
    Bavarde * tab;

    public : 
        Famille();
        Famille(int);
        ~Famille();
};

void fonction(Bavarde);

#endif