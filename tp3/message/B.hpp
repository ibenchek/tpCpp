#ifndef B_HPP
#define B_HPP

#include "A.hpp"
#include <iostream>

class A;

class B{
    int j;

    public :
        B();
        B(int);
        ~B();

        int getJ();

        void send(A&);
        void exec(int);
};

#endif // !B_HPP