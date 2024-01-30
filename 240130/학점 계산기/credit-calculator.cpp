#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int n, i;
    double arr[10], sum, avg;
    cin >> n;
    sum = 0;

    for(i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / i;
    cout << fixed << setprecision(1) << avg << '\n';

    if (avg >= 4.0) {
        cout << "Perfect";
    }
    else if (avg >= 3.0) {
        cout << "Good";
    }
    else {
        cout << "Poor";
    }

}