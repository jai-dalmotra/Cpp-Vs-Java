//Java: Does not support goto to avoid spaghetti code and maintain structured programming.
//Java: Does not support explicit pointers for security reasons. Instead, it uses references.

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *ptr = &a;
    cout << "Value of a: " << *ptr << endl; // Dereferencing
    return 0;
}
