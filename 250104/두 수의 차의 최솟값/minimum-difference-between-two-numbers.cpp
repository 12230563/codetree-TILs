#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n; int min = 1000000;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] < min) min = arr[i] - arr[i - 1];
    }
    cout << min;

}