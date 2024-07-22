#include<iostream>
#include<string>
using namespace std;

int main() {
    string str[10];
    for (string& s : str) {
    cin >> s;
    }
    for (int i = 9; i > -1; i--) {
        cout << str[i] << '\n';
    }
}