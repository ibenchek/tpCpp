#ifndef LISTE_HPP
#define LISTE_HPP

#include <iostream>
#include "Cercle.hpp"
#include "Rectangle.hpp"

using std::string;

const int TAILLE = 10;

class Liste{ 
    public :
        Cercle * tabC;
        int nb_c;

        Rectangle * tabR;
        int nb_r;

        static int compteur;

    public :
        Liste();
        Liste(const int, int, const int, int);
        ~Liste();

        int getCompteur();
        string toString();

        void ajouterC(Cercle);
        void ajouterR(Rectangle);
};

#endif // !LISTE_HPP