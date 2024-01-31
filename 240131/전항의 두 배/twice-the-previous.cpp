#include <iostream>
using namespace std;

int main() {
    int arr[10], i;
    cin >> arr[0] >> arr[1];

    for (i = 2; i < 10; i++) {
        arr[i] = 2 * arr[i - 2] + arr[i - 1];
    }
    
    for (i = 0; i < 10; i++) {
        cout << arr[i] << ' ';
    }
}