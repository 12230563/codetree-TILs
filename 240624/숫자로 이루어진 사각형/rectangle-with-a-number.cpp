#include <iostream>
using namespace std;

void print(int);

int main() {
    int a;
    cin >> a;
    print(a);
}

void print(int n) {
    int num = 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << num << ' ';
            num++;
            if (num == 10) num = 1;
        }
        cout << '\n';
    }
}