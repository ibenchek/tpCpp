#include "statisticien.hpp"
#include <fstream>

using std::string;
using std::ifstream;
using std::endl;

Statisticien::Statisticien() : calcul(false) {}

Statisticien::Statisticien(bool state){
    this->setCalcul(state);
}

Statisticien::~Statisticien(){

}

bool Statisticien::aCalcule(){
    return this->calcul;
}

void Statisticien::setCalcul(bool state){
    this->calcul = state;
}

void Statisticien::acquerir(string nom){
    ifstream fichier; // autre manière d'ouvrir un fichier
    int i = 0, max, somme, moy, total;

    fichier.open(nom.c_str());
    
    if (!fichier.fail()){
        fichier >> max;
        while(!fichier.eof() && i<max) {
            double lecture;
            fichier >> lecture;
            ++i;
            total+= (int) lecture;
        }
        somme   = max*(max+1)/2;
        moy     = total/max; 
    }
    this->somme = somme;
    this->moy   = moy;

    fichier.close();
}