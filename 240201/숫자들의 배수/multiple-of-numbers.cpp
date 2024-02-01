#include <iostream>
using namespace std;

int main() {
    int n, cnt, arr[10], i;
    cnt = 0;
    cin >> n;
    for (i = 1; i < 11; i++) {
        arr[i] = n * i;
        cout << arr[i] << ' ';
        if (arr[i] % 5 == 0) {
            cnt++;
            if (cnt == 2) {
                break;
            }
        }
    }
}