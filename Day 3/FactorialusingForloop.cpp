#include <iostream>
using namespace std;

int main() {
    int n;
    long long fact = 1;

    // Take input
    cout << "Enter a number: ";
    cin >> n;

    // Factorial using for loop
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }

    // Output result
    cout << "Factorial of " << n << " is " << fact;

    return 0;
}