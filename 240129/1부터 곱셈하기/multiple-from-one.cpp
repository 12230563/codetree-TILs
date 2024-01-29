#include <iostream>
using namespace std;

int main() {
    int n, prod, i;
    prod = 1;
    cin >> n;
    for (i = 1; i <= n; i++) {
        prod *= i;
        if (prod >= n) {
            break;
        }
    }
    cout << i;
}