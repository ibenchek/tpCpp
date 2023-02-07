#include "mere.hpp"
#include <iostream>

using std::cout;
using std::endl;
using std::string;



Mere::Mere() : nom("Elena gomez") {
    this->cpt++;
    cout << "Naissance de la mere : " << this->getNom() << "\nConstruction Mere : " << this->getCpt() << '\n';
}

Mere::Mere(string n){
    this->cpt++;
    this->setNom(n);
    cout << "Naissance de la mere : " << this->getNom() << "\nConstruction Mere : " << this->getCpt()  << '\n';
}

Mere::~Mere(){
    cout << "Mort de la mere : " << this->getNom() << '\n';
}

string Mere::getNom(){
    return this->nom;
}

int Mere::getCpt(){
    return cpt;
} 

void Mere::setNom(string name){
    this->nom = name;
}

void Mere::afficher(){
    cout << this->getNom() << " est un objet de type Mere" << '\n';
}