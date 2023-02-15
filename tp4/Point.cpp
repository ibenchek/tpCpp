#include "Point.hpp"
#include <iostream>

Point ORIGINE = Point{};

Point::Point(){
    this->x = 0;
    this->y = 0;
}

Point::Point(int a, int b){
    this->x = a;
    this->y = b;
}

Point::~Point() {}


int Point::getX(){
    return x;
}

int Point::getY(){
    return y;
}

void Point::setX(int a){
    x = a;
}

void Point::setY(int b){
    y = b;
}

//  NE PAS OUBLIER de définir ORIGINE