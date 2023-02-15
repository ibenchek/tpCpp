#include "Liste.hpp"

using std::string;
using std::cout;
using std::endl;
using std::to_string;

Liste::Liste(){
    this->tabC = new Cercle[1000];
    this->nb_c = 0;
    this->tabR = new Rectangle[1000];
    this->nb_r = 0;
}

Liste::Liste(const int c, int c1, const int r, int r1){
    this->tabC = new Cercle[c];
    this->nb_c = c1;
    this->tabR = new Rectangle[r];
    this->nb_r = r1;
}

Liste::~Liste(){
    delete [] this->tabC;
    delete [] this->tabR;
}

int Liste::getCompteur(){
    return this->compteur;
}

string Liste::toString(){
    string object;

    for(int counter_c = 0, counter_r = 0; counter_c+counter_r < this->nb_c+this->nb_r;){
        if(tabC[counter_c].ordre > tabR[counter_r].ordre){
            object+=tabC[counter_c].toString();
            counter_c++;
        }
        if(tabC[counter_c].ordre < tabR[counter_r].ordre){
            object+=tabR[counter_r].toString();
            counter_r++;
        }
    }

    /*
    for(int i = 0; i < this->nb_c; i++){
        object+=tabC[i].toString();
    }
    for(int j = 0; j < this->nb_r; j++){
        object+=tabR[j].toString();
    }
    for counter_c counter_r ; counter_c + counter_r < nb_c+nb_r; 
        if (cercle[counter_c].ordre < rectangles[].ordre)
            afficher Cercle
            counter_c++
        else
    */
    return object;
}

void Liste::ajouterC(Cercle c){
    this->compteur++;

    tabC[nb_c] = c;
    tabC[nb_c].ordre++;

    this->nb_c++;
}

void Liste::ajouterR(Rectangle r){
    this->compteur++;

    tabR[nb_r] = r;
    tabR[nb_r].ordre++;

    this->nb_r++;
}