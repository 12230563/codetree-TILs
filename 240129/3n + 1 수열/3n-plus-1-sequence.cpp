#include <iostream>
using namespace std;

int main() {
    int n, i, cnt;
    cnt = 0;
    cin >> n;
    while (true) {
        if (n % 2 == 0) {
            n /= 2;
            cnt++;
        }
        else if (n % 2 == 1 && n != 1) {
            n = 3 * n + 1;
            cnt++;
        }
        else {
            break;
        }
    }
    cout << cnt;

}