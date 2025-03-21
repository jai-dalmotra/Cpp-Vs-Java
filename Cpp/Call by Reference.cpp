//C++: Allows passing arguments by reference, modifying the actual value.
//Java: Only supports call by value (even for objects, references are passed by value).

#include <iostream>
using namespace std;

void modify(int &x) {
    x = 100;
}

int main() {
    int a = 10;
    modify(a);
    cout << a; // Outputs: 100
    return 0;
}
