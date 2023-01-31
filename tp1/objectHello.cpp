#include <iostream>

using std::cout;
using std::endl;

class Exemple{
    public: 
    void afficher(){
        cout << "Hello" << endl;
    }
};

int main(int, char **){
    Exemple e;

    e.afficher();

    return 0;
}