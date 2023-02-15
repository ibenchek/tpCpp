#ifndef CERCLE_HPP
#define CERCLE_HPP

#include <iostream>
#include "Forme.hpp"

using std::string;

class Cercle : public Forme{
    int x;
    int y;
    int w;
    int h;

    public:
        static int ordre;

    public :
        Cercle();
        Cercle(int, int, int, int);
        Cercle(int, int, int);
        ~Cercle();

        int getRayon();
        int getLargeur();
        int getHauteur();
        
        string toString();
};


#endif