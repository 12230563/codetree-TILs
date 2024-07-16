#include <iostream>
using namespace std;

int main() {
    int arr[100];
    int n, m, cnt = 0;
    cin >> n >> m;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == m) cnt++;
    }

    cout << cnt;
}