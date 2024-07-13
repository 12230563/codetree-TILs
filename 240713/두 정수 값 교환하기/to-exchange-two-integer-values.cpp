#include <iostream>
using namespace std;

void swap(int &, int &);

int main() {
    int x, y;
    cin >> x >> y;
    swap(x, y);
    cout << x << ' ' <<  y;
}

void swap(int &a, int &b) {
    int temp = a;
    a = b;
    b = temp;
}