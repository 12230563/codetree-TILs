#include <iostream>
using namespace std;

bool IsLeap(int);

int main() {
    int y;
    cin >> y;
    if (IsLeap(y)) cout << "true";
    else cout << "false";
}

bool IsLeap(int n) {
    if (n % 4 != 0) return false;
    else if (n % 100 == 0 && n % 400 != 0) return false;
    else return true;
}