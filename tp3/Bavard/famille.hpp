#ifndef FAMILLE_HPP
#define FAMILLE_HPP

#include <iostream>
#include <cstdlib>
#include "bavard.hpp"

class Famille{
    Bavarde * tab;

    public : 
        Famille();
        Famille(int);
        ~Famille();
};

#endif // !FAMILLE_HPP