#include <iostream>
using namespace std;

int main() {
    int n, m, x, y, count = 0;
    cin >> n >> m;
    int arr[9][9] = {0};

    while(count < m) {
        cin >> x >> y;
        count++;
        arr[x - 1][y - 1] = 1;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if(arr[i][j] == 1) cout << 1 << ' ';
            else cout << 0 << ' ';
        }
        cout << '\n';
    }
}