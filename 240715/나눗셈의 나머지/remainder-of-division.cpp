#include <iostream>
using namespace std;

int Remain(int, int);

int main() {
    int temp[10] = {};
    int sum = 0;
    int a, b;
    cin >> a >> b;
    while (a != 0) {
        temp[Remain(a, b)]++;
        a /= b;
    }
    for (int& i : temp) {
        sum += i * i;
    }
    cout << sum;
}

int Remain(int n, int m) {
    return n % m;
}