#include <iostream>
using namespace std;

int main() {
    int n;

    // Take input
    cout << "Enter an integer: ";
    cin >> n;

    // Print numbers divisible by 2
    cout << "Numbers divisible by 2 between 1 and " << n << " are:\n";
    for (int i = 1; i <= n; i++) {
        if (i % 2 == 0) {
            cout << i << " ";
        }
    }

    return 0;
}