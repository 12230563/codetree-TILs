#include <iostream>
using namespace std;

void Printstar() {
    cout << "**********" << '\n';
    return;
}

int main() {
    for (int i = 0; i < 5; i++) {
        Printstar();
    }
}