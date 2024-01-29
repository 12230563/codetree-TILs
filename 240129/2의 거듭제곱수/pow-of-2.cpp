#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    while (true) {
        n /= 2;
        cnt++;
        if (n == 1) break;
    }
    cout << cnt;
}