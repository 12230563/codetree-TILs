#include <iostream>
#include <string>
using namespace std;

int FindIdx(string, char);

int main() {
    string s = "LEBROS";
    char c;
    cin >> c;
    if (FindIdx(s, c) != -1) cout << FindIdx(s, c);
    else cout << "None";
}

int FindIdx(string str, char ch) {
    int i;
    for (i = 0; i < str.size(); i++) {
        if (ch == str[i]) {
            return i;
        }
    }
    return -1;
}