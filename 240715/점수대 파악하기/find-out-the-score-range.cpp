#include <iostream>
using namespace std;

int main() {
    int arr[100], cnt[11] = {};
    int score = 100;
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0) break;
        cnt[arr[i] / 10]++;
    }
    for (int i = 10; i > 0; i--) {
        cout << score << " - " << cnt[i];
        score -= 10;
        cout << '\n';
    }

}