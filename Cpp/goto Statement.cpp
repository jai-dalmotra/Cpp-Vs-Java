//Supports the goto statement, which allows jumping to labeled parts of the program.
//Java: Does not support goto to avoid spaghetti code and maintain structured programming.

#include <iostream>
using namespace std;

int main() {
    int x = 5;
    if (x == 5) {
        goto label;
    }
    cout << "This won't be printed\n";

    label:
    cout << "Jumped to label\n";
    return 0;
}
