#include <iostream>
using namespace std;

int main() {
    int a, b, sum;
    sum = 0;
    cin >> a >> b;

    a = min(a, b);
    b = max(a, b);

    for (int i = a; i <= b; i++) {
        if (i % 5 == 0) {
            sum += i;
        }
    }
    cout << sum;
}