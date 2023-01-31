#include <iostream>

using std::cout;
using std::endl;
/*
    int  a = 4;
    int *p = nullptr;

    p = &a;
    cout << *p << " " << p << '\n';

int main(int, char **){
    int *p = new int;

    *p = 3;
    cout << *p << endl;

    delete p;

    return 0;
}
*/

int main(int, char **){
    const int TAILLE = 500;

    int *p = new int[TAILLE];
    
    for(auto i = 0; i<TAILLE; ++i){
        p[i] =i;
    }
    for(auto i = 0; i < TAILLE; ++i){
        cout << p[i] << endl;
    }

    delete [] p;

    return 0;
}