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
    cout << "Construction de " << b1.getA() << " et " << b2.getA() << '\n';
}

Couple::Couple(Bavarde b, Bavarde b0){
    cout << "Construction de " << b.getA() << " et " << b0.getA() << '\n';
}

Couple::~Couple(){
    cout << "Destruction de couple \n";
    b1.~Bavarde();
    b2.~Bavarde();
}

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

void fonction (Bavarde b){
    cout << b.getA() << '\n';
}

