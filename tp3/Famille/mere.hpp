#ifndef MERE_HPP
#define MERE_HPP

#include <iostream>

class Mere{
    protected :
    std::string nom;
    static int cpt;

    public : 
        Mere();
        Mere(std::string);
        ~Mere();

        std::string getNom();
        int getCpt();
        
        void setNom(std::string);
 
        void afficher();
};


#endif // !MERE_HPP