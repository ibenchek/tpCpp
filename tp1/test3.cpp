#include <iostream>

using namespace std;

const int TAILLE = 10;

int main(int ,char **){
    int tab[TAILLE];

    for (int i=0; i < TAILLE; ++i){
        tab[i] = i%2;
        cout << tab[i] << "";
    }

    cout << endl;

    return TAILLE;
}