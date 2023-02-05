#ifndef COUPLE_HPP
#define COUPLE_HPP

#include <iostream>
#include "bavard.hpp"

class Couple{
    Bavarde b1;
    Bavarde b2;

    public :
        Couple();
        Couple(Bavarde, Bavarde);
        ~Couple();
};

#endif // !COUPLE
