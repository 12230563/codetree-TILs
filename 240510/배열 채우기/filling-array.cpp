#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int i;

    for (i = 0; i < 10; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            break;
        }
    }

    for (int j = i - 1; j >= 0; j--) {
        cout << arr[j] << ' ';
    }
}