#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double arr[8], sum, avg;

    for (int i = 0; i < 8; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    avg = sum / 8;
    cout << fixed << setprecision(1) << avg;


}