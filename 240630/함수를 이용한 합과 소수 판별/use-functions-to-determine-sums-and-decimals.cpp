#include <iostream>
using namespace std;

bool IsPrime(int);
int SumDi(int);

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if(IsPrime(i) && (SumDi(i) % 2 == 0)) cnt++;
    }
    cout << cnt;
}

bool IsPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;

    for(int i = 2; i * i <= n; i++) {
        if(n % i == 0) return false;
    }
    return true;
}

int SumDi(int m) {
    int sum = 0;
    while (m != 0) {
        sum += m % 10;
        m /= 10;
    }
    return sum;
}