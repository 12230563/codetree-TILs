#include <iostream>

using namespace std;

int main() {
    int arr[100], digit;
    int cnt[10] = {0, };
    
    for (int i = 0; i < 100; i++) {
        cin >> arr[i];
        if (arr[i] == 0) {
            break;
        }
    }
	
    for (int i = 0; arr[i] != 0; i++) {
        digit = (arr[i] % 100) / 10;
        cnt[digit]++;
    }

    for (int i = 1; i < 10; i++) {
        cout << i << " - " << cnt[i] << '\n';
    }

}