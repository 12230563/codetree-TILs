#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b;

    n = a;
    cout << n << ' ';

    while (n < b) {
        if (n % 2 == 1) {
            n *= 2;
            cout << n << ' ';
        }
        else {
            n += 3;
            cout << n << ' ';
        }
    }
}