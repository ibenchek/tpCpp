#ifndef RECTANGLE_HPP
#define RECTANGLE_HPP

#include <iostream>
using std::string;

class Rectangle{
    int x;
    int y; 
    int w;
    int h;
    
    public:
    static int ordre;
    
    public:
        Rectangle();
        Rectangle(int, int, int, int);
        string toString();
};

#endif