#include "Forme.hpp"
#include "Liste.hpp"

using std::cout;
using std::endl;

int Cercle::ordre = 0;
int Rectangle::ordre = 0;
int Liste::compteur = 0;
int Forme::nbForme = 0;

/*
int main(int, char **){
    Rectangle r(1,2,3,4);
    Cercle c(2,4,6,8);
    Cercle c2(3,3,2);

    Liste l{};
    
    l.ajouterC(c);
    l.ajouterR(r);
    l.ajouterC(c2);

    cout  << l.toString();

    cout << Forme::nbForme << '\n';
    Forme f1{};
    cout << Forme::nbForme << '\n';
    Forme f2{2,4};
    cout << Forme::nbForme << '\n';

    return 0;
}
*/

// Troncature de type
int main(int, char **){
    Cercle cercle;

    afficher1(cercle);
    afficher2(cercle);
    afficher3(&cercle);

    return 0;
}