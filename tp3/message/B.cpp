#include "B.hpp"
#include "A.hpp"

using std::cout;
using std::endl;

B::B(){
    this->j = 0;
    cout << "Construction de B : " << this->j << '\n';
}

B::B(int a){
    this->j = a;
    cout << "Construction de B : " << this->j << '\n';
}

B::~B(){
    cout << "Destruction de B \n";
}

int B::getJ(){
    return this->j;
}

void B::send(A& a){
    a.exec(5);
}

void B::exec(int x){
    this->j+=x;
}