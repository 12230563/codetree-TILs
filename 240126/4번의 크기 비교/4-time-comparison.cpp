#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e;
    int line1, line2, line3, line4;

    cin >> a >> b >> c >> d >> e;
 
    line1 = a > b ? 1 : 0;
    line2 = a > c ? 1 : 0;
    line3 = a > d ? 1 : 0;
    line4 = a > e ? 1 : 0;

    cout << line1 << '\n' << line2 << '\n' << line3 << '\n' << line4;
}