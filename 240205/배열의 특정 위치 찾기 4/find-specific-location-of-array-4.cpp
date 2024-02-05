#include <iostream>
using namespace std;

int main() {
    int arr[10], i, sum, cnt;
    cnt = 0;
    sum = 0;

    for (i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0)
            break;
    }

    for (int n = 0; n < i - 1; n++) {
        if (arr[n] % 2 == 0 && arr[n] != 0) {
            cnt++;
            sum += arr[n];
        }
    }
    cout << cnt << ' ' << sum;
}