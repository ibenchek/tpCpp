#include "producteur.hpp"
#include <fstream>

using std::endl;
using std::string;
using std::ofstream;


Producteur::Producteur() : travaille(0) {}

Producteur::Producteur(int x){
    this->setTravail(x);
}

Producteur::~Producteur(){

}

int Producteur::getTravail(){
    return this->travaille;
}

void Producteur::setTravail(int x){
    this->travaille = x;
}

void Producteur::produire(int quantite, string nom) {
    int travaille = getTravail();
    travaille++;
    this->setTravail(travaille);

    ofstream fichier(nom.c_str());

    if (!fichier.fail()){
        fichier << quantite;
        fichier << '\n'; 
        for (int i = 0; i < quantite; ++i){
            fichier << i+1;
            fichier << '\n';
        }
    }
    fichier.close();
}