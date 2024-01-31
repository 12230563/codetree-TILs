#include <iostream>
using namespace std;

int main() {
    int arr[100], n, i;
    int cnt[10] = {0, };
    cin >> n;

    for (i = 0; i < n; i++) {
        cin >> arr[i];
        cnt[arr[i]]++;
    }
    
    for (i = 1; i < 10; i++) {
        cout << cnt[i] << '\n';
    }
}