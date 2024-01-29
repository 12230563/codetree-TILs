#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    bool cond = false;

    for (int i = a; i <= b; i++) {
        if (1920 % i == 0 && 2880 % i == 0) {
            cond = true;
            break;
        }
    }
    if (cond) {
        cout << 1;
    }
    else cout << 0;
}