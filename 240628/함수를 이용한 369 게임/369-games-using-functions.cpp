#include <iostream>
#include <string>
using namespace std;

bool IsMul3(int);
bool IsCond(int);

int main() {
    int a, b, cnt = 0;
    cin >> a >> b;
    for (int i = a; i <= b; i++) {
        if(IsMul3(i) || IsCond(i)) {
            cnt++;
        }
    }
    cout << cnt;
}

bool IsMul3(int x) {
    if (x % 3 == 0) return true;
    else return false;
}

bool IsCond(int y) {
    string str = to_string(y);
    for (char ch : str) {
        if (ch == '3' || ch == '6' || ch == '9') {
            return true;
        }
    }
    return false;
}