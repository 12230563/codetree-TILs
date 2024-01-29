#include <iostream>
using namespace std;

int main() {
    int n, cnt = 0;
    cin >> n;

    while (true) {
        if (n % 2 == 0) {
            n = 3 * n + 1;
            cnt++;
        }
        else {
            n = 2 * n + 2;
            cnt++;
        }
        
        if (n >= 1000) break;
    }
    cout << cnt;
}