#include <iostream>
using namespace std;

int main() {
    int w = 13;
    double g = 0.165000, n;

    n = g * w;
    
    cout << fixed;

    cout.precision(6);
    cout << w << " * " << g << " = " << n;

}