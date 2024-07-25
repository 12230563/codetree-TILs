#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> v(n);

    for(int& i : v) {
        cin >> i;
    }

    sort(v.begin(), v.end());
    cout << v[k + 1];
}