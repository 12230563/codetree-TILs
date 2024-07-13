#include <iostream>
using namespace std;

bool IsIn2021(int, int);

int main() {
    int a, b;
    cin >> a >> b;
    if(IsIn2021(a, b)) cout << "Yes";
    else cout << "No";
}

bool IsIn2021(int m, int d) {
    if (m <= 12) {
        if (m == 2) {
            if (d > 28) return false;
            else return true;
        }
        if (m == 4 || m == 6 || m == 9 || m == 1) {
            if (d <= 30) return true;
            else return false;
        }
        else {
            if (d <= 31) return true;
            else return false;
        }

    }
    else return false;
}