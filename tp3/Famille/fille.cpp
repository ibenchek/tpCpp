#include "fille.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;

Fille::Fille() : Mere(){
    cout << "Naissance de la fille : " << this->getNom() << '\n'; 
    cout << "Construction fille : " << this->getCpt() << '\n';
}

Fille::Fille(string n) : Mere(n){
    this->setNom(n);
    cout << "Naissance de la fille : " << this->getNom() << '\n';
    cout << "Construction fille : " << this->getCpt() << '\n'; 
}

Fille::~Fille(){
    cout << "Mort de la fille : " << this->getNom() << '\n';
}

void Fille::afficher(){
    cout << this->getNom() << " est un objet de type fille" << '\n';
}