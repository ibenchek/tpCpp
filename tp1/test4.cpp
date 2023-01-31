#include <iostream>

using namespace std;

int main(int, char **){
    char s[10];

    // string   s;
    // char   * s;

    cin >> s;

    cout << "#" << s << "#" << endl;

    for (int i = 0; i<10; ++i){
        cout << "@" << s[i] << "@" << (int)s[i] << "@" << endl;
    }

    return 0;
}