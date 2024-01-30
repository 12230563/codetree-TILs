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

    for (i = 0; i < 10; i++) {
        if (arr[i] % 2 == 0 && arr[i] != 0) {
            cnt++;
            sum += arr[i];
        }
    }
    cout << cnt << ' ' << sum;
}