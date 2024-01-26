#include <iostream>
using namespace std;

int main() {
    int a, cnt = 0;
    char s;
    
    for (int i = 0; i < 3; i++) {
        cin >> s >> a;
        if (s == 'Y' && a >= 37) {
            cnt++;
        }
    }
    if (cnt >= 2) {
        cout << 'E';
    }
    else {
        cout << 'N';
    }


}