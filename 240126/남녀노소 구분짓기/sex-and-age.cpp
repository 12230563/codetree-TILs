#include <iostream>
using namespace std;

int main (){
    int gender, age;

    cin >> gender >> age;
    
    bool A, B;
    A = (gender == 0);
    B = (age >= 19);

    if (A){
        if (B){
            cout << "MAN";
        }
        else{
            cout << "BOY";
        }
    }
    else{
        if (B){
            cout << "WOMAN";
        }
        else{
            cout << "GIRL";
        }
    }
}