#include <iostream>
using namespace std;

int main() {
    int a, b, n;
    a = 0;
    b = 0;

    for (int i = 0; i < 10; i++) { 
        cin >> n;
        if (n % 5 == 0) b++;
        if (n % 3 == 0) a++;
    }
    cout << a << ' ' << b; 
}