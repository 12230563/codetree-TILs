#include <iostream>
using namespace std;

int main() {
    int arr[100], min, max, i, n;
    bool exit = true;
    i = 0;
    n = 0;
    while (exit) {
        cin >> arr[i];
        n++;
        if (arr[i] == 999 || arr[i] == -999) {
            exit = false;
        }
        else {
            i++;
        }
    }
    min = arr[0];
    max = arr[0];

    for (i = 0; i < n - 1; i++) {
        if (min > arr[i]) {
            min = arr[i];
        }
        if (max < arr[i]) {
            max = arr[i];
        }
    }
    cout << max << ' ' << min;

}