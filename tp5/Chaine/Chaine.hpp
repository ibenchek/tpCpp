#ifndef CPP5__CHAINE_HPP
#define CPP5__CHAINE_HPP

#include <iostream>
#include <fstream>

class Chaine  {
    int capacite;
    char * tab;
    public:
        static int nbConstructeurParCopie;

    public:

        Chaine();
        Chaine(char const *);
        Chaine(int);
        Chaine(const Chaine &);
        Chaine & operator=(const Chaine &);
        Chaine operator+(const Chaine &);
        ~Chaine();

        //static int getNbConstructeursCopie();
        int getCapacite() const;
        char * c_str() const;
        void afficher(std::ostream & = std::cout) const;  
};

        
std::ostream & operator<<(std::ostream &, const Chaine &);
void afficherParValeur(const Chaine);
void afficherParReference(const Chaine &);

#endif
