#include <iostream>
using namespace std;

void Printstring(int n) {
    for (int i = 0; i < n; i++) {
        cout << "12345^&*()_" << '\n';
    }
    return;
}

int main() {
    int n;
    cin >> n;
    Printstring(n);
    
}