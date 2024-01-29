#include <iostream>
using namespace std;

int main() {
    int i, n, sum;
    sum = 0;
    cin >> n;

    for (i = 1; i <= n; i++) {
        sum += i;
        if (sum >= n) {
            break;
        }
    }
    cout << i;
}