#ifndef BAVARD_HPP
#define BAVARD_HPP
#define TAILLE 5

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

void fonction(Bavarde);

#endif