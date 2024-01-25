#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double a, b;
    char c;

    cin >> c;
    cin >> a >> b;

    cout << c << '\n' << fixed << setprecision(2) << a << '\n' << b;

}