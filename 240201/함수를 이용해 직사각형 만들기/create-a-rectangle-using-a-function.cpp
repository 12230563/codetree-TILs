#include <iostream>
using namespace std;

void Printrect(int n, int m) {
    int i, j;

    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            cout << '1';
        }
        cout << '\n';
    }
}

int main() {
    int x, y;
    cin >> x >> y;
    Printrect(x, y);
}