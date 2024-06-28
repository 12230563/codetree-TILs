#include <iostream>
using namespace std;

int lcm(int, int);

int main() {
    int x, y;
    cin >> x >> y;
    cout << lcm(x, y);
}

int lcm(int a, int b) {
    int l = 1;
    while(l % b != 0 || l % a != 0) {
        l++;
    }
    return l;
}