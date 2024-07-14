#include <iostream>
#include <string>
using namespace std;

bool f(string);

int main() {
    string s;
    cin >> s;
    if (f(s)) cout << "Yes";
    else cout << "No";
}

bool f(string str) {
    int n = str.size();
    int s = 0;

    for (int i = 0; i < n; i++) {
        s += str[i];
    }
    if (s % str[0] == 0) return false;
    else return true;
}