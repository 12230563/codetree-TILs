#include <iostream>
using namespace std;

int main() {
    int n, i, cnt;
    cin >> n;

    for (i = 1; i <= n; i++) {
        if (i % 2 == 0 || i % 5 == 0 || (i % 3 == 0 && i % 9 != 0))
        continue;
        cout << i << ' ';
    }
    
    
}