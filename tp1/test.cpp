#include <iostream>
#include <string>

using namespace std; 

int main (int, char **){
    string prenom;
    string nom;

    int age;

    cout << "Quel est votre prenom ?" << endl;
    cin >> prenom;
    cout << prenom << std::endl;

    cout << "Quel est votre nom ?" << endl;
    cin >> nom;
    cout << nom << endl;
 
    cout << "Quel est votre age ?" << endl;
    cin >> age;

    cout << "Bonjour " << prenom << ":" << nom << endl;

    return 0;
}