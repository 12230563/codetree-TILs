#include <iostream>
using namespace std;

int main() {
    int a, n, sum;
    cin >> a >> n;
    sum = a + n;
    for (int i = 0; i < n; i++) {
        cout << sum << '\n';
        sum += n;
    }
}