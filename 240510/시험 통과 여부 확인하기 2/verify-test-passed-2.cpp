#include <iostream>
using namespace std;

int main() {
    int n, sum, cnt = 0;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int arr[4] = {};
        sum = 0;
        for (int j = 0; j < 4; j++) {
            cin >> arr[j];
            sum += arr[j];
        }
        if (sum >= 240) {
            cout << "pass\n";
            cnt++;
        }
        else cout << "fail\n";
    }
    cout << cnt;
}