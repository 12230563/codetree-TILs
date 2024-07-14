#include <iostream>
#include <algorithm>
using namespace std;

void f(int&, int&);

int main() {
    int a, b;
    cin >> a >> b;
    f(a, b);
    cout << a << ' ' << b;
}

void f(int& x, int& y) {
    int temp1, temp2;
    temp1 = max(x, y) + 25;
    temp2 = min(x, y) * 2;
    x = temp2;
    y = temp1;
}