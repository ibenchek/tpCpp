#include <iostream>

using std::cout;
using std::endl;

void change_ptr(int * a, int * b){
    int c;

    c  = *a;
    *a = *b;
    *b =  c;
}

void change_ref(int & a, int & b){
    int c;

    c = a;
    a = b;
    b = c;
}

int main(int, char**){
    int  a = 3;
    int  b = 5;
    int& c = a;
    
    cout << a << " " << b << endl;
    change_ptr(&a,&b);
    cout << a << " " << b << endl;
    
    change_ref(a,b);
    cout << a << " " << b << endl;



    cout << '\n' << endl;

    cout << a << " " << b << " " <<  c << endl;
    b = 4;
    cout << a << " " << b << " " <<  c << endl;
    c = 5;
    cout << a << " " << b << " " <<  c << endl;
    a = 6;
}