#include<iostream>
#include<string>
using namespace std;


int main() {
    string str[5] = {"apple", "banana", "grape", "blueberry", "orange"};
    char ch;
    int cnt = 0;
    cin >> ch;
    for (string s : str) {
        if (s[3] == ch || s[2] == ch) {
            cout << s << '\n';
            cnt++;
        }

    }
    cout << cnt;

}