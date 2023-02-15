#ifndef __CPP4__FORME_HPP__
#define __CPP4__FORME_HPP__

#include "Point.hpp"

// enum COULEURS { BLANC, NOIR};

enum class COULEURS {BLANC, NOIR, BLEU, JAUNE, ROUGE, VERT};

class Forme {
    int id;

    Point p;

    int w;
    int h;

    COULEURS couleur;
    
    public:
    static int nbForme;

    public:
        Forme();
        Forme(Point,COULEURS);
        Forme(Point,int,int,COULEURS);
        ~Forme();

        static int prochainId();

        int getId();

        int getLargeur();
        int getHauteur();

        void setX(int);
        void setY(int);

        Point getPoint();

        COULEURS getCouleur();
        void setCouleur(COULEURS);

};

#endif