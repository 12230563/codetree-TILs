#include <iostream>
using namespace std;

int main() {
    char arr[10];
    int i;

    for (i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    cout << arr[1] << ' ' << arr[4] << ' ' << arr[7];
}