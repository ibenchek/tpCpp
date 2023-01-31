#include <iostream>

using std::cout;
using std::endl;

class Tableau{
    int * tab;
    int   taille;

    public :
        Tableau() : tab(nullptr), taille(10){
            tab = new int [taille];
            for (int i = 0; i < taille; i++){
                tab[i] = i;
            }
        }
        ~Tableau(){
            delete [] tab;
        }
        void afficher(){
            for(int i = 0; i < taille; i++){
                cout << tab[i] << '\n';
            }
        }
};

int main(int, char **){
    Tableau t;

    t.afficher();

    return 0;
}