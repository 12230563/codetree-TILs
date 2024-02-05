#include <iostream>
using namespace std;

int main() {
    int arr[100], i;

    for (i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0)
            break;            
    }
    cout << arr[i-1] + arr[i - 2] + arr[i - 3];   
}