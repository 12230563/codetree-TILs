#include <iostream>
using namespace std;

int main() {
    int arr[10][4], i, j, n, cnt = 0;
    int sum = 0;
    cin >> n;
    
    for (i = 0; i < n; i++) {
        for (j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }

    for (i = 0; i < n; i++) {
        sum = 0;

        for (j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        if (sum >= 240) {
            cout << "pass" << '\n';
            cnt++;
        }
        else {
            cout << "fail" << '\n';
        }    
    }
    cout << cnt;
    
}