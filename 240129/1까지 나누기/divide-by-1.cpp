#include <iostream>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n;

    while (n > 1) {
        n /= i;
        i++;
    }    
    cout << i - 1;
}