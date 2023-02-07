#include "A.hpp"
#include "B.hpp"

using std::cout;
using std::endl;

int main(int, char**){
    A  una{6};
    B  unb{2};

    cout << "La valeur de i avant send : " << una.getI() << '\n';
    cout << "La valeur de j avant send : " << unb.getJ() << '\n';

    una.send(unb);
    unb.send(una);

    cout << "La valeur de i apres send : " << una.getI() << '\n';
    cout << "La valeur de j apres send : " << unb.getJ() << '\n';

    return 0;
}