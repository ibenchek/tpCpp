#include <iostream>
#include "Cercle.hpp"

using std::cout;
using std::endl;
using std::string;
using std::to_string;

Cercle::Cercle(int x0, int y0, int w0,int h0){
    cout << "je suis un constructeur 1 de Cercle." << '\n';

    this->x = x0;
    this->y = y0;
    this->w = w0;
    this->h = h0;
}

Cercle::Cercle(int cx, int cy, int rayon){
    cout << "Je suis un constructeur 2 de Cercle." << '\n';

    this->x = cx-rayon;
    this->y = cy-rayon;
    this->w = rayon;
    this->h = 2*rayon;
}

string Cercle::toString(){
    string cercle = "CERCLE ";
    string objet = cercle + '\t' + to_string(x) + '\t' + to_string(y) + '\t' + to_string(w) + '\t' + to_string(h) + '\n'; 

    return objet;
}
