#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double arr[8] ,avg = 0;
    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        avg += arr[i];
    }
    avg /= 8;
    cout << fixed << setprecision(1) << avg;
}