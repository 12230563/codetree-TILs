#include <iostream>
#include <string>
using namespace std;

int main() {
    int cnt = 0;
    string str;
    char ch;
    getline(cin, str);
    cin >> ch;
    for (char i : str) {
        if (ch == i) cnt++;
    }
    cout << cnt;
}