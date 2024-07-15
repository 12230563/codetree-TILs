#include <iostream>
using namespace std;

int Sum(int);

int main() {
    int n;
    cin >> n;
    cout << Sum(n);
}

int Sum(int n) {
    if (n == 1) return 1;
    return Sum(n - 1) + n;
}