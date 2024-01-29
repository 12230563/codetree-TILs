#include <iostream>
using namespace std;

int main() {
    int n ,i;
    bool cond = true;
    cin >> n;

    for (i = 2; i <= n; i++) {
        if (n == 2) cond = true;
        if (n % i == 0) {
            cond = false;
            break;
        }
    }
    if (cond) {
        cout << 'N';
    }
    else {
        cout << 'C';
    }
}