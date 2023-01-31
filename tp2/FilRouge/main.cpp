#include <iostream>
#include "Cercle.hpp"
#include "Rectangle.hpp"

using std::cout;
using std::endl;

int main(int, char **){
    Rectangle r(1,2,3,4);
    Cercle c(2,4,6,8);
    Cercle c2(3,3,2);

    cout << r.toString() << '\n';
    cout << c.toString() << '\n';
    cout << c2.toString() << '\n';

    return 0;
}