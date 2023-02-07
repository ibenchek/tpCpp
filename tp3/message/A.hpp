#ifndef A_HPP
#define A_HPP

#include "B.hpp"
#include <iostream>

class B;

class A{
    int i;

    public :
        A();
        A(int);
        ~A();

        int getI();

        void send(B&);
        void exec(int);
};

#endif // !A_HPP