#include "Chaine.hpp"
#include "catch.hpp"
#include <cstring>

int Chaine::nbConstructeurParCopie = 0;

Chaine::Chaine(){
    this->capacite = -1;
    this->tab = nullptr;
}

Chaine::Chaine(char const* inCS){
    this->capacite = strlen(inCS);
    this->tab = new char [capacite+1];
    strcpy(tab,inCS);
}

Chaine::Chaine(int inCapacite){
    capacite = inCapacite;
    tab = new char [capacite+1];
    tab[0]='\0';
}

Chaine::Chaine(const Chaine & inChaine){
    capacite = inChaine.getCapacite();
    tab = new char[capacite+1];
    tab[0] = '\0';
    strcpy(inChaine.c_str(),tab);
    nbConstructeurParCopie++;
}

Chaine & Chaine::operator=(const Chaine & other){
    if (this != &other){
        this->capacite = other.capacite;
        delete [] this->tab;
        this->tab = new char [this->capacite+1];
        std::strncpy(tab, other.tab, capacite + 1);
    }
    return *this;
}

Chaine Chaine::operator+(const Chaine & other){
    char * newChar = new char[std::strlen(tab) + std::strlen(other.tab) + 1];

    std::strcpy(newChar,tab);
    std::strcat(newChar,other.tab);

    Chaine res(newChar);

    delete newChar;
    
    return res;
}

Chaine::~Chaine(){
    delete [] tab;
}

int Chaine::getCapacite() const{
    return capacite;
}

char * Chaine::c_str() const{
    return tab;
}

std::ostream& operator<<(std::ostream & os, const Chaine & other){
    os << other.c_str();
    return os;
}

void Chaine::afficher(std::ostream & os) const{
    os << tab;
}

void afficherParValeur(const Chaine c){
    c.afficher();
}

void afficherParReference(const Chaine & r_c){
    r_c.afficher();
}
