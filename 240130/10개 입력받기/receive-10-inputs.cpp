#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[10], sum, i;
    double avg;
    sum = 0;

    for (i = 0; i < 10; i++) {
        cin >> arr[i];
        sum += arr[i];
        if (arr[i] == 0)
            break;
    }
    if (arr[i] == 0) 
        avg = static_cast<double>(sum) / i;
    else
        avg = static_cast<double>(sum) / i + 1;
    
    cout << fixed << setprecision(1) << sum << ' ' << avg;    

}