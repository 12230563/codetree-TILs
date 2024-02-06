#include <iostream>
using namespace std;

int main() {
    int n, i, arr[100] = {0,};
    cin >> n;

    arr[0] = 1;
    arr[1] = n;

    for (i = 0; i < 100; i++) {
        arr[i + 2] += arr[i + 1] + arr[i];
        cout << arr[i] << ' ';
        if (arr[i] >= 100) {
            break;
        }
    }

}