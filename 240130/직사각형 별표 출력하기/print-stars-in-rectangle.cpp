#include <iostream>
using namespace std;

int main() {
    int n, m, i, j;
    cin >> n >> m;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << '*' << ' ';
        }
        cout << '\n';
    }
}