#include <iostream>
using namespace std;

int main() {
    int a, b, c, sum;
    cin >> a >> b >> c;
    sum = a + b + c;
    cout << sum - max(a, max(b, c)) - min(a, min(b, c));
}