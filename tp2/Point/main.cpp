#include <iostream>
#include "Point.hpp"

using std::cout;
using std::endl;

int main(int, char **){
    cout << Point::getCpt() << '\n';
    Point p1{2,1};
    cout << p1.getCpt() << '\n';
    Point p2{};
    cout << p2.getCpt() << '\n';
    Point p3{1,5};
    cout << p3.getCpt() << '\n';

    Point * p;
    p = new Point{};
    cout << p->getCpt() << '\n';

    int dx = 3;
    int dy = 5;

    p->AfficherXY();
    p->deplacerVers(12,24);
    p->AfficherXY();
    p->deplacerDe(dx,dy);
    p->AfficherXY();

    p1.AfficherXY();
    p1.deplacerVers(21,14);
    p1.AfficherXY();
    p1.deplacerDe(dx,dy);
    p1.AfficherXY();

    p2.AfficherXY();
    p2.deplacerVers(8,10);
    p2.AfficherXY();
    p2.deplacerDe(dx,dy);
    p2.AfficherXY();

    p3.AfficherXY();
    p3.deplacerVers(6,9);
    p3.AfficherXY();
    p3.deplacerDe(dx,dy);
    p3.AfficherXY();

    return 0;
}