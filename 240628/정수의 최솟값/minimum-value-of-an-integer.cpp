#include <iostream>
#include <algorithm>
using namespace std;

int f(int, int, int);

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    cout << f(x, y, z);
}
int f(int a, int b, int c) {
    int minval;
    minval = min(a, min(b, c));
    return minval;
}