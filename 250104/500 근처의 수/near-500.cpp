#include <iostream>
using namespace std;

int main() {
    int n = 10;
    int arr[n];
    int idx = 0;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[idx] >= 500) break;
        idx++;
    }
    cout << arr[idx - 1] << ' ' << arr[idx];
}