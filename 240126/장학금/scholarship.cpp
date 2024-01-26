#include <iostream>
using namespace std;

int main() {
    int mid_score, fin_score;

    cin >> mid_score >> fin_score;

    if (mid_score >= 90){
        if (fin_score >= 95){
            cout << 100000;
        }
        else if (fin_score >= 90){
            cout << 50000;
        }
        else{
            cout << 0;
        }
    }
    else{
        cout << 0;
    }
}