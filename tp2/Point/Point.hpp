#ifndef POINT_HPP
#define POINT_HPP

class Point{
    int x;
    int y;
    static int cpt;

    public:
        Point();
        Point(int, int);

        int getX();
        int getY();
        static int getCpt();

        void AfficherXY();

        void setX(int);
        void setY(int);

        void deplacerDe(int, int);
        void deplacerVers(int, int);
};

#endif
