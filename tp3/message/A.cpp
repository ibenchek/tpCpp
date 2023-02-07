#include "A.hpp"
#include "B.hpp"

using std::cout;
using std::endl;

A::A(){
    this->i = 0;
    cout << "Construction de A : " << this->i << '\n';
}

A::A(int a){
    this->i = a;
    cout << "Construction de A : " << this->i << '\n';
}

A::~A(){
    cout << "Destruction de A \n";
}

int A::getI(){
    return this->i;
}

void A::send(B& b){
    b.exec(5);
}

void A::exec(int x){
    this->i+=x;
}