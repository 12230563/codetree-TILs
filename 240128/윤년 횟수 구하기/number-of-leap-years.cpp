#include <iostream>
using namespace std;

int main() {
    int year, cnt = 0;
    cin >> year;
    
    for (int i = 1; i <= year; i++){
        if (i % 4 == 0) {
            cnt++;
            if (i % 100 == 0 && i % 400 != 0){
                cnt--;
            }
        }
    }
    cout << cnt;
}