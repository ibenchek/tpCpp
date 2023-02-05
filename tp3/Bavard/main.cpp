#include "bavard.hpp"

using std::cout;
using std::endl;

/*
// Tableau verbeux
int main(int, char **){
    const int TAILLE = 20;
    {
        Bavarde   tab1[TAILLE];
        Bavarde * tab2 = new Bavarde[TAILLE];

        for (int i=0; i< TAILLE; i++){
            tab1[i].afficher();
            tab2[i].afficher();
        }

        delete [] tab2;
    }
    cout << "nbre de consrtruction : " << cptc << '\n' << "nbre de destruction : " << cptd << '\n';

    return 0;
}

// Objet complexe : un couple
int main(int, char **){
    Bavarde ba(2);
    Bavarde baa(1);
    
    Couple c1();
    Couple c2(ba,baa);

    return 0;
}
*/

// Objet complexe : une famille nombreuse
int main(int, char **){
    Famille f1{};
    Famille f2{3};
}
