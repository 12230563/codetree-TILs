#include <iostream>
using namespace std;

int main() {
    int n ,temp = 0;
    cin >> n;

    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            temp += i;
        }
    }
    if (temp == n) {
        cout << 'P';
    }
    else {
        cout << 'N';
    }
}