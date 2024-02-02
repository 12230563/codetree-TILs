#include <iostream>
using namespace std;

int Mul(int x, int y) {
    int i, res = 1;

    for (i = 0; i < y; i++) {
        res *= x;
    }
    
    return res;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << Mul(a, b);
}