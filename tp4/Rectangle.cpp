#include <iostream>
#include <string>
#include "Rectangle.hpp"

using std::cout;
using std::endl;
using std::string;
using std::to_string;

Rectangle::Rectangle(){
    //cout << "Je suis un constructeur par defaut de Rectangle" << '\n';

    this->x = 0;
    this->y = 0;
    this->w = 0;
    this->h = 0;
}

Rectangle::Rectangle(int x0, int y0, int w0, int h0){
    cout << "je suis un constructeur de Rectangle." << '\n';

    this->x = x0;
    this->y = y0;
    this->w = w0;
    this->h = h0;
}

string Rectangle::toString(){
    string rect = "RECTANGLE ";
    string objet = rect + '\t' + to_string(x) + '\t' + to_string(y) + '\t' + to_string(w) + '\t' + to_string(h) + '\n'; 

    return objet;
}