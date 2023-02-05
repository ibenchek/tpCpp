#include "couple.hpp"

using std::cout;
using std::endl;

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