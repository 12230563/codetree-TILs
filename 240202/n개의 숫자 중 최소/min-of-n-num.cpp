#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i, cnt, min;
    cin >> n;
    for (i = 0; i < n; i++) {
        cin >> arr[i];
    }
    min = arr[0];
    cnt = 0;
    for (i = 0; i < n; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
    }
    for (i = 0; i < n; i++) {
        if (min == arr[i]) {
            cnt++;
        }
    }
    cout << min << ' ' << cnt;

}