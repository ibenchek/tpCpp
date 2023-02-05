#ifndef BAVARD_HPP
#define BAVARD_HPP

extern int cptc;
extern int cptd;

class Bavarde{
    int a;

    public :
        Bavarde();
        Bavarde(int);
        ~Bavarde();

        int getA();

        void setA(int);
        
        void afficher();
};

class Couple{
    Bavarde b1;
    Bavarde b2;

    public :
        Couple();
        Couple(Bavarde, Bavarde);
        ~Couple();
};

void fonction(Bavarde);

#endif