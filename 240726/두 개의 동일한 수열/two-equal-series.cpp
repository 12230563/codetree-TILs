#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    int n;
    bool cond = true;
    cin >> n;
    vector<int> v1(n), v2(n);

    for (int i = 0; i < n; i++) {
        cin >> v1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> v2[i];
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.end());

    for (int i = 0; i < n; i ++) {
        if (v1[i] != v2[i]) {
            cond = false;
            break;
        }
    }
    if (cond) cout << "Yes";
    else cout << "No";
}