#ifndef FORME_HPP
#define FORME_HPP

class Forme{
    int w;
    int h;
    
    public:
        static int nbForme;

    public:
        Forme();
        Forme(int,int);
        ~Forme();

        void afficher();
};

void afficher1(Forme);
void afficher2(Forme &);
void afficher3(Forme *);

#endif // !FORME_HPP