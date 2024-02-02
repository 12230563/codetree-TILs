#include <iostream>
using namespace std;

int divide(int A, int B) {
    if (A % B == 0)
        return B;
    else
        return divide(B, A % B);
}

int main() {
    int a, b, gcd;
    cin >> a >> b;
    
    gcd = divide(a, b);

    cout << gcd;
    
}