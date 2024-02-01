#include <iostream>
using namespace std;

int main() {
    int arr[11], i;
    cin >> arr[0] >> arr[1];
    for (i = 2; i < 11; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }
    cout << arr[0] << ' ' << arr[1] << ' ';
    for (i = 2; i < 10; i++) {
        cout << arr[i] % 10 << ' ';
    }

}