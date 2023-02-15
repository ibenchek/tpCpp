#include <iostream>
#include "Cercle.hpp"

using std::cout;
using std::endl;
using std::string;
using std::to_string;

int Cercle::ordre = 0;

Cercle::Cercle(){
    //cout << "je suis un constructeur par defaut de Cercle." << '\n';

    this->x = 0;
    this->y = 0;
    this->w = 0;
    this->h = 0;

    nbForme++;
}

Cercle::Cercle(int x0, int y0, int w0,int h0){
    cout << "je suis un constructeur 1 de Cercle." << '\n';

    this->x = x0;
    this->y = y0;
    this->w = w0;
    this->h = h0;

    nbForme++;
}

Cercle::Cercle(int cx, int cy, int rayon){
    cout << "Je suis un constructeur 2 de Cercle." << '\n';

    this->x = cx;
    this->y = cy;
    this->w = rayon;
    this->h = 0;

    nbForme++;
}

Cercle::~Cercle() {}

int Cercle::getRayon(){
    return w;
}

int Cercle::getLargeur(){
    return
}

string Cercle::toString(){
    string cercle = "CERCLE ";
    string objet;
    if (h != 0){
        objet = cercle + '\t' + to_string(x) + '\t' + to_string(y) + '\t' + to_string(w) + '\t' + to_string(h) + '\n'; 
    }
    else{
        objet = cercle + '\t' + to_string(x) + '\t' + to_string(y) + '\t' + to_string(w) + '\n';
    }

    return objet;
}
