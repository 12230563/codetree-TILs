#include<iostream>
#include<string>
using namespace std;

int main() {
    string str[10];
    char ch;
    int cnt = 0;
    for (string& s : str) {
        cin >> s;
    }
    cin >> ch;
    for (string& s : str) {
        if(s[s.length() - 1] == ch) {
            cnt++;
            cout << s << '\n';
        }
    }
    if (cnt == 0) cout << "None";
}