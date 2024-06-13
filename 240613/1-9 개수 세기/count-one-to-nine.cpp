#include <iostream>
using namespace std;

int main() {
    int arr[100], cnt[100] = {};
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < 10; i++) {
        cnt[arr[i]]++;
    }
    for (int i = 0; i < 9; i++) {
        cout << cnt[i + 1] << '\n';
    }
}