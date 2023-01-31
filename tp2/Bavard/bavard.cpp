#include <iostream>

using std::cout;
using std::endl;

class Bavarde{
    int a;

    public :
    Bavarde(int a){
        cout << "Construction de " << a << '\n';
    }
    ~Bavarde(){
        cout << "Tait-toi ! " << a << '\n'; 
    }
    int getA(){
        return a;
    }
}bizarre(1);

Bavarde globale(2);

void fonction (Bavarde b){
    cout << "Code de la fonction.\n";
}

int main(int, char **){
    cout << Bavarde(0).getA() << '\n';

    Bavarde b1(3);
    Bavarde b2(4);
    Bavarde * p = new Bavarde(5);

    fonction(b1);

    return 0;
}