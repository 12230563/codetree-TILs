#include <iostream>
using namespace std;

int main() {
    int n, i, j, k;
    cin >> n;
    for (int k = 0; k < 2; k++) {
        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                cout << '*';
            }
            cout << '\n';
        }
        cout << '\n';
    }
}