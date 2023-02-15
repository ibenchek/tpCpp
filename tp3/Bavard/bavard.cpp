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

void test1(Bavarde b){
    cout << "appel de la fonction avec parametre objet et copie : " << b.getA() << '\n';
    
}

Bavarde test2a(){
    cout << "appel de la fonction avec retour.\n";

    return Bavarde{};
}

Bavarde test2b(){
    Bavarde b{};
    cout << "appel de la fonction avec retour.\n";

    return b;
}

void test3(Bavarde & b){
    cout << "appel de la fonction avec reference : " << b.getA() << '\n';
}

void test4(Bavarde * b){
    cout << "appel de la fonction avec un pointeur sur un objet : " << b->getA() << '\n';
}