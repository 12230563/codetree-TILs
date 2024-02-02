#include <iostream>
using namespace std;

int SumDiv(int x) {
    int i, sum = 0;
    for (i = 1; i <= x; i++) {
        sum += i;
    }
    
    return sum / 10;
}

int main() {
    int n;
    cin >> n;
    
    cout << SumDiv(n);
}