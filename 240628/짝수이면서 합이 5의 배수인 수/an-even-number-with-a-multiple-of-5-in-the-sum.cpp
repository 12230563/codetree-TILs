#include <iostream>
using namespace std;

bool fun(int);

int main() {
    int a;
    cin >> a;
    if(fun(a)) cout << "Yes";
    else cout << "No";
}

bool fun(int n) {
    int cond1;
    cond1 = (n / 10) + (n % 10);
    if(n % 2 == 0 || cond1 % 5 == 0) return true;
    else return false;
}