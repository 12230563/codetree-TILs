#include <iostream>
using namespace std;

void Abs(int [], int);

int main() {
    int n, arr[50];
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    Abs(arr, n);
    
    for (int i = 0; i < n; i++) {
        cout << arr[i] << ' ';
    }
}

void Abs(int a[], int m) {
    for (int i = 0; i < m; i++) {
        if (a[i] < 0) a[i] = (-a[i]);
    }
}