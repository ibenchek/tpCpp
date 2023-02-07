#ifndef PRODUCTEUR_HPP
#define PRODUCTEUR_HPP

#include <iostream>

class Producteur {
    int travaille;

    public :
        Producteur();
        Producteur(int);
        ~Producteur();

        int getTravail();
        void setTravail(int);

        void produire(int, std::string);
};

#endif // !PRODUCTEUR_HPP