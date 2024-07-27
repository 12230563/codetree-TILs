#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    bool cond = true;
    vector<char> v1, v2;

    for (char &i : v1) {
        cin >> i;
        if (i == '\n') break;
    }
    for (char &i : v2) {
        cin >> i;
        if (i == '\n') break;
    }
    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.begin());

    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            cond = false;
            break;
        }
    }

    if (cond) cout << "Yes";
    else cout << "No";
}