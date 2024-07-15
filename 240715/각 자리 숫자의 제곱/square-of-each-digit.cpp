#include <iostream>
#include <cmath>
using namespace std;

int F(int);

int main() {
    int n;
    cin >> n;
    cout << F(n);
}

int F(int n) {
    if (n < 10) return pow(n, 2);
    return F(n / 10) + pow(n % 10, 2);
}