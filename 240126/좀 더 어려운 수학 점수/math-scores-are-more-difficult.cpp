#include <iostream>
using namespace std;

int main() {
    int eng_a, eng_b, mat_a, mat_b;

    cin >> mat_a >> eng_a >> mat_b >> eng_b;

    if (mat_a > mat_b){
        cout << 'A';
    }
    else if (mat_a < mat_b){
        cout << 'B';
    }
    else{
        if (eng_a > eng_b){
            cout << 'A';
        }
        else{
            cout << 'B';
        }
    }

}