#include <iostream>
#include <string>
using namespace std;

bool IsPrimeN(int);

int main() {
    int a, b, sum = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if(IsPrimeN(i)) {
            sum += i;
        }
    }
    cout << sum;
}

bool IsPrimeN(int n) {
    if (n == 2) return true;
    if (n == 1) return false;

    for (int i = 2; i * i <= n; i++) {
        if(n % i == 0) {
            return false;
        }
    }
    return true;
}