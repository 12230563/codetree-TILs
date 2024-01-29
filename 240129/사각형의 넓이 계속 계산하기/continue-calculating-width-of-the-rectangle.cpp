#include <iostream>
using namespace std;

int main() {
    int l, w;
    char stop;

    while (true) {
        cin >> l >> w >> stop;
        cout << l * w << '\n';
        if (stop == 'C') break;
    }
}