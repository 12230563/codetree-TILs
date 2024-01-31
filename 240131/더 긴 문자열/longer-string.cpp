#include <iostream>
#include <string>
using namespace std;

int main() {
    string a, b;
    int la, lb;
    cin >> a >> b;
    la = a.length();
    lb = b.length();

    if (la > lb) {
        cout << a << ' ' << a.length();
    }
    else if (la < lb) {
        cout << b << ' ' << b.length();
    }
    else
        cout << "same";
}