#ifndef FILLE_HPP
#define FILLE_HPP

#include <iostream>
#include "mere.hpp"

class Fille: public Mere {
    protected :

    public :
        Fille();
        Fille(std::string);
        ~Fille();

        void afficher();
};

#endif // !FILLE_HPP