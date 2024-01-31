#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    string a, b, c;
    int x, y, z, n, m;
    cin >> a >> b >> c;
    x = a.length();
    y = b.length();
    z = c.length();

    m = max(max(x, y), z);
    n = min(min(x, y), z);

    cout << m - n;
    
}