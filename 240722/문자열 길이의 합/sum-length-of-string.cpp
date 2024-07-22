#include<iostream>
#include<string>
using namespace std;

int main() {
    int n;
    int cnt = 0, sum = 0;
    string str[10];
    cin >> n;

    for(int i = 0; i < n; i++) {
        cin >> str[i];
    }
    for(int i = 0; i < n; i++) {
        sum += str[i].length();
        if(str[i][0] == 'a') cnt++;
    }
    cout << sum << ' ' << cnt;

}