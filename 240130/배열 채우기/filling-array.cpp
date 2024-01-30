#include <iostream>
using namespace std;

int main() {
    int arr[10], i;
    
    for (i = 0; i < 10; i ++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            break;
        }
    }
    for (i = i-1; i >= 0; i--) {
        cout << arr[i] << ' ';
    }
}