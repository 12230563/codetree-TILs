#include <iostream>
using namespace std;

bool isprime(int n){
    if(n <= 2){
        return false;
    }
    
    for(int i = 2;i*i <= n;i++){
        if(n % (i * i) == 0){
            return false;
            break;
        }
        else{
            return true;
        }
    }
}


int main() {
    int n;

    cin >> n;


    if(isprime(n) == true){
        cout << 'P';
    }
    else{
        cout << 'C';
    }


}