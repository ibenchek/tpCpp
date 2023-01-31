#include <iostream>
#include <string>

using std::cout;
using std::cin;
using std::endl;

void fonction1(int a){
    cout << &a << endl;
}

void fonction2(int &a){
    cout << &a << endl;
} 

int main(int, char **){
    int age = 45;

    //int a  = 5;
    //int &r = a;

    //cin >> r;
    //cout << '\n' << a;

    cout << &age << endl;
    fonction1(age);
    fonction1(age);

    return 0;
}