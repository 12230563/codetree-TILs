#include <iostream>
using namespace std;

void Prs();

int main() {
    for (int i = 0; i < 5; i++) {
        Prs();
    }
}

void Prs() {
    for (int i = 0; i < 10; i++) {
        cout << '*';
    }
    cout << '\n';
}