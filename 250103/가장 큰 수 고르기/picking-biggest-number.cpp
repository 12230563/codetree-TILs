#include <iostream>
using namespace std;

int main() {
    int max;
    int arr[10];
    for (int &i : arr) {
        cin >> i;
    }
    max = arr[0];
    for (int &i : arr) {
        if (max < i) max = i;
    }
    cout << max;
}