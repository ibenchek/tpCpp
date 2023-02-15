#ifndef __CPP4__POINT_HPP__
#define __CPP4__POINT_HPP__

class Point {
    int x;
    int y;

    public:
        Point();
        Point(int,int);
        ~Point();

        int getX();
        int getY();
        
        void setX(int);
        void setY(int);
};

extern Point ORIGINE;

// declaration d'un point ORIGINE
// il ne faudra pas oublier de l'instancier quelque part

#endif