#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int n, sum, cnt;
    double avg;
    sum = 0;
    cnt = 0;

    while (true) {
        cin >> n;
        
        if (n > 29 || n < 10) {
            break;
        }

        sum += n;
        cnt++;
    }
    avg = static_cast<double>(sum) / cnt;

    cout << fixed << setprecision(2) << avg;
}