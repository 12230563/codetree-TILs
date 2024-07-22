#include<iostream>
#include<string>
using namespace std;

int main() {
    string str[10];
    for (string& s : str) {
    cin >> s;
    }
    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            cout << str[i] << '\n';
        }
    }
}