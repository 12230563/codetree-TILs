#include <iostream>
using namespace std;

int main() {
    int arr[10], cnt[6] = {};
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }
    for (int j = 1; j < 7; j++) {
        cnt[arr[j]]++;
        cout << cnt[j] << '\n';
    }
}