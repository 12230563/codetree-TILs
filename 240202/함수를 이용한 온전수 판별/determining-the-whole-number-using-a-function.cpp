#include <iostream>
using namespace std;

int Det(int x, int y) {
    int i, cnt = 0;

    for (i = x; i <= y; i++) {
        if (i % 2 != 0 && i % 10 != 5 && !(i % 3 == 0 && i % 9 !=0)) {
            cnt++;
        }
    }
    return cnt;
}

int main() {
    int a, b;
    cin >> a >> b;

    cout << Det(a, b);
}