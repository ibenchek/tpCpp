#ifndef CERCLE_HPP
#define CERCLE_HPP

#include <iostream>
using std::string;

class Cercle{
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
        string toString();
};


#endif