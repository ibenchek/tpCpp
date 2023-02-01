#include <iostream>
#include "bavard.hpp"

using std::cout;
using std::endl;

int cptc = 0;
int cptd = 0;

Bavarde::Bavarde(){
    a = 0;
    cout << "construction de " << a << '\n';
    cptc++;
}

Bavarde::Bavarde(int a){
    cout << "Construction de " << a << '\n';
    cptc++;
}
Bavarde::~Bavarde(){
    cout << "Tait-toi ! " << a << '\n'; 
    cptd++;
}

int Bavarde::getA(){
    return a;
}

void Bavarde::setA(int a1){
    a = a1;
}

void Bavarde::afficher(){
    cout << "Affichage de %" << '\n';
}

Couple::Couple(){
    b1().setA(b1().getA());
    b2().setA(b2().getA());
}

Couple::Couple(int a1, int a2){
    b1().setA(a1);
    b2().setA(a2);
}

Couple::~Couple(){
    b1().~Bavarde();
    b2().~Bavarde();
}

void fonction (Bavarde b){
    cout << b.getA() << '\n';
}

