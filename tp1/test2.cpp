#include <iostream>
#include <string>
#include <cstring>

using namespace std;


int main(int , char **){
    string chaine1;
    string chaine2;
    
    cout << "donner une premiere chaine de caractere" << endl;
    cin >> chaine1;

    cout << "donner une deuxieme chaine de caractere" << endl;
    cin >> chaine2;

    if (chaine1 < chaine2){
        cout << chaine1 << " taille: " << chaine1.length() << endl;
        
    }
    else{
        cout << chaine2 << " taille: " << chaine2.length() << endl;
    }
    
    return 0;
}