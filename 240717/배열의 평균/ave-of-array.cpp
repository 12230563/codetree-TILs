#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int arr[2][4];
    double sum;
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < 2; i++) {
        sum = 0;
        for(int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
        cout << fixed << setprecision(1) << sum / 4 << ' ';
    }
    cout << '\n';

    for (int j = 0; j < 4; j++) {
        sum = 0;
        for (int i = 0; i < 2; i++) {
            sum += arr[i][j];
        }
        cout << fixed << setprecision(1) << sum/ 2 << ' ';
    }
    cout << '\n';

    sum = 0;

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 4; j++) {
            sum += arr[i][j];
        }
    }
    cout << fixed << setprecision(1) << sum / 8;

}