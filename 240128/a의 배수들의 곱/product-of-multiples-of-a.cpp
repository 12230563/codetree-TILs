#include <iostream>
using namespace std;

int main() {
    int a, b, temp = 1;
    cin >> a >> b;

    for (int i = 1; i <= b; i++) { 
        if ( i % a == 0) {
            temp *= i;
        }
    }
    cout << temp;
}