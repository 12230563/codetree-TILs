#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int sum = 0, j;
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (j = 0; j < 10; j++) {
        if (arr[j] <= 250) {
            sum += arr[j];
        }
        else break;
    }
    cout << sum << ' ' << static_cast<double>(sum) / j;

}