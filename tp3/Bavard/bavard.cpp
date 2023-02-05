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

void fonction (Bavarde b){
    cout << b.getA() << '\n';
}

