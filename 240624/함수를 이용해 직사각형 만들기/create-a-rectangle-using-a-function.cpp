#include <iostream>
using namespace std;

void print(int ,int );

int main() {
    int a, b;
    cin >> a >> b;
    print(a, b);
}

void print(int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << '1';
        }
        cout << '\n';
    }
}