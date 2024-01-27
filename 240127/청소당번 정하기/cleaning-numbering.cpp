#include <iostream>
using namespace std;

int main() {
    int a, b, c, n, a_x, b_x;
    cin >> n;

    c = n / 12;
    b = n / 3;
    a = n / 2;
    a_x = n / 6;

    a = a - c - a_x;
    b = b -c;

    cout << a << ' ' << b << ' ' << c;
}