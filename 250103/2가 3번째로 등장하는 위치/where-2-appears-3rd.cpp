#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, j, count = 0;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++) {
        int input;
        cin >> input;
        v.push_back(input);
    }
    for (j = 0; j < n; j++) {
        if(v[j] == 2) count++;
        if(count == 3) break;
    }
    cout << j + 1;



}
