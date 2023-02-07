#include "fille.hpp"

using std::cout;
using std::endl;
using std::string;

int Mere::cpt = 0;

int main(int, char **){
    Mere m2{};
    Mere m3{"Bahia LIDIRISSI"};
    Fille f1{"Hind EL ANDALOUSSI"};

    m2.afficher();
    f1.afficher();
    
    Mere  * pm = new Mere{"mere_dyn"};
    Fille * pf = new Fille{"fille_dyn"};
    Mere  * pp = new Fille{"fille vue comme mere"};

    pm->afficher();
    pf->afficher();
    pp->afficher();

    return 0;
}