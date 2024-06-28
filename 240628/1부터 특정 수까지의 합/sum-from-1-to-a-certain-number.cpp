#include <iostream>
using namespace std;

int f(int);

int main() {
    int n;
    cin >> n;
    cout << f(n);
}

int f(int a) {
    int sum = 0;
    for(int i = 0; i <= a; i++) {
        sum += i;
    }
    return sum / 10;
}