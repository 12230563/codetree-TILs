#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[10];
    int i, sum = 0;

    for(i = 0; i < 10; i++) {
        cin >> arr[i];
        if(arr[i] == 0) break;
        sum += arr[i];
    }
    cout << fixed << sum << ' ' << setprecision(1) << static_cast<double>(sum) / i;
}