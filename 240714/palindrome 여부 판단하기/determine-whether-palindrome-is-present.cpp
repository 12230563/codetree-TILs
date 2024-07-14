#include <iostream>
#include <string>
using namespace std;

bool IsPal(string);

int main() {
    string s;
    cin >> s;
    if(IsPal(s)) cout <<"Yes";
    else cout << "No";
}

bool IsPal(string str) {
    const int SIZE = str.size();
    bool res = true;
    for (int i = 0; i < SIZE; i++) {
        if (str[i] != str[SIZE - 1 - i]) {
            res = false;
            return res;
        }
    }
    return res;
}