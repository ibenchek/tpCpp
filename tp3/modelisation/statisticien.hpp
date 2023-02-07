#ifndef __CPP3_STATISTICIEN_HPP__
#define __CPP3_STATISTICIEN_HPP__

#include <iostream>

using std::string;

class Statisticien {
    bool calcul;
    int somme;
    int moy;

    public :
        Statisticien();
        Statisticien(bool);
        ~Statisticien();

        bool aCalcule();
        void setCalcul(bool);

        void acquerir(string);  
};

#endif