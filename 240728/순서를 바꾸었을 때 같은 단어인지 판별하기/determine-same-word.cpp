#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main() {
    string s1, s2;
    vector<char> v1, v2;

    getline(cin, s1);
    getline(cin, s2);

    v1.assign(s1.begin(), s1.end());
    v2.assign(s2.begin(), s2.end());

    sort(v1.begin(), v1.end());
    sort(v2.begin(), v2.begin());

    if (v1.size() != v2.size()) {
        cout << "No";
    }
    else {
        if(equal(v1.begin(), v1.end(), v2.begin())) {
            cout << "Yes";
        }
        else cout << "No";
    }
}