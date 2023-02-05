#include "famille.hpp"

using std::cout;
using std::endl;

Famille::Famille(){
    tab = new Bavarde[TAILLE];
    //tab = (Bavarde *) malloc(TAILLE*sizeof(Bavarde));
}

Famille::Famille(int nb){
    tab = new Bavarde[nb];
    //tab = (Bavarde *) malloc(nb*sizeof(Bavarde));
}

Famille::~Famille(){
    //free(tab);
    delete [] tab;
}