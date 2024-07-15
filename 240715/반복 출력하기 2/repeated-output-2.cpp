#include <iostream>
#include <string>
using namespace std;

void Print(int);

int main() {
    int a;
    cin >> a;
    Print(a);
}

void Print(int n) {
    if (n == 0) return;
    Print(n - 1);
    cout << "HelloWorld\n";
}