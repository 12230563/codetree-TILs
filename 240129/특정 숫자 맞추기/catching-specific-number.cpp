#include <iostream>
using namespace std;

int main() {
    int n;

    while (true) {
        cin >> n;
        if (n == 25) {
            cout << "Good";
            break;
        }
        else if (n < 25) {
            cout << "Higher" << '\n';
        }
        else cout << "Lower" << '\n';
    }
}