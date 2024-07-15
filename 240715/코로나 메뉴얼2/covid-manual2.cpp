#include <iostream>
using namespace std;

int SP(char, int);

int main() {
    int arr[5]= {};
    int t;
    char c;
    for (int i = 0; i < 3; i++) {
        cin >> c >> t;
        arr[SP(c, t)]++;
    }
    for (int i = 1; i < 5; i++) {
        cout << arr[i] << ' ';
    }
    if (arr[1] >= 2) {
        cout << 'E';
    }
}

int SP(char ch, int temp) {
    if (ch == 'Y') {
        if (temp >= 37) {
            return 1;
        }
        else return 3;
    }
    else {
        if (temp >= 37) return 2;
        else return 4;
    }
}