#include <iostream>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    bool cond = true;

    for (int i = a; i <= b; i++) {
        if (i % c == 0) {
            cond = false;
            break;
        }
    }
    
    if (cond) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}