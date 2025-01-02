#include <iostream>
using namespace std;

int main() {
    int arr[11] = {0};
    int s = 0 ,t = 0;
    for (int i = 1; i < 11; i++) {
        cin >> arr[i];
    }
    for (int i = 1; i < 6; i++) {
        s += arr[2 * i];
        t += arr[2 * i - 1];
    }
    if (s > t) {
        cout << s - t;
    }
    else cout << t - s;
}