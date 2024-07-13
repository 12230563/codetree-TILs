#include <iostream>
using namespace std;

void Cal(int, char, int);

int main() {
    int x, y;
    char s;
    cin >> x >> s >> y;
    Cal(x, s, y);
}

void Cal(int a, char ch, int b) {
    if(ch == '+') cout << a << " + " << b << " = " << a + b;
    else if (ch == '-') cout << a << " - " << b << " = " << a - b;
    else if (ch == '*') cout << a << " * " << b << " = " << a * b;
    else if (ch == '/') cout << a << " / " << b << " = " << a / b;
    else cout << "False";
}