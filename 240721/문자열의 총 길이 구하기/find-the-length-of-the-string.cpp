#include<iostream>
#include<string>
using namespace std;


int main() {
    string str;
    int cnt = 0;
    getline(cin, str);
    for (char ch : str) {
        if (ch != ' ') cnt++;
    }
    cout << cnt;

}