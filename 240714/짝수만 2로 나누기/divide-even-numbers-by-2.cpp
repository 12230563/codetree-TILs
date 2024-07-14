#include <iostream>
using namespace std;

void Div2(int [], int);

int main() {
    int arr[50];
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Div2(arr, n);
}

void Div2(int x[], int m) {
    for(int i = 0; i < m; i++) {
        if (x[i] % 2 == 0) {
            x[i] /= 2;
        }
        cout << x[i] << ' ';
    }
}