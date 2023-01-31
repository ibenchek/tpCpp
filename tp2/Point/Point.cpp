#include <iostream>
#include "Point.hpp"

using std::cout;
using std::endl;

int Point::cpt = 0;

Point::Point(){
    cout << "je suis un constructeur sans argument. \n";

    this->x = 0;
    this->y = 0;
    cpt++;
}

Point::Point(int x0, int y0){
    cout << "Je suis un constructeur avec arguments.\n";

    this->x = x0;
    this->y = y0;
    cpt++;
}

void Point::AfficherXY(){
    cout << getX() << " " << getY() << '\n';
}

int Point::getX(){
    return x;
}

int Point::getY(){
    return y;
}

int Point::getCpt(){
    return cpt;
}

void Point::setX(int a){
    this->x = a;
}

void Point::setY(int b){
    this->y = b;
}

void Point::deplacerDe(int dx, int dy){
    this->x+= dx;
    this->y+= dy;
}

void Point::deplacerVers(int nv_x, int nv_y){
    setX(nv_x);
    setY(nv_y);
}