#include <iostream>
using namespace std;

int main() {
    int n;
    bool odd_3, even_5;

    cin >> n;
    odd_3 = (n % 2 == 1) && (n % 3 == 0);
    even_5 = (n % 2 == 0) && (n % 5 == 0);

    if (odd_3 || even_5){
        cout << "true";
    }
    else{
        cout << "false";
    }
    
}