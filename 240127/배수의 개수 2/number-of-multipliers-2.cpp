#include <iostream>
using namespace std;

int main() {
    int n, a;
    a = 0;

    for (int i = 0; i < 10; i++) {
        cin >> n;
        if (n % 2 == 1) {
            a++;
        }
    }
    cout << a;
}