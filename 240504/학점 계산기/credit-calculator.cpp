#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n;
    double arr[5] = {};
    double sum = 0;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }

    cout << fixed << setprecision(1) << (sum / n) << '\n';
    if (sum / n >= 4.0) {
        cout << "Perfect";
    }
    else if (sum / n >= 3.0) {
        cout << "Good";
    }
    else cout << "Poor";
}