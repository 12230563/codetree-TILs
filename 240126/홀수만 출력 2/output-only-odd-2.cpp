#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    for (int i = b; i >= a; i -= 2) {
        cout << i << ' ';
    }
}