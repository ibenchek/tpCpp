#include <iostream>

using std::string;
using std::cout;
using std::endl;

class Mere{
    protected :
        string nom;
    public :
        Mere(string s = "pas fourni") : nom(s){
        }

        void methode1(){
            cout << "Methode1(): " << nom << '\n';
        }
};

class Fille : public Mere {
    private :
        string nom;
    
    public :
        Fille():Mere("noname"){
        }

        void methode2(){
            cout << "Methode2(): " << Mere::nom << '\n';
        }
};


int main (int, char **){
    Fille f;

    f.methode1();
    f.methode2();
}