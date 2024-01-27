#include <iostream>
using namespace std;

int main() {
    int a, b, max, min;
    cin >> a >> b;

    max = a > b ? a : b;
    min = b > a ? a : b;

    for (int i = max; i >= min; i--) {
        cout << i << ' ';
    }
}