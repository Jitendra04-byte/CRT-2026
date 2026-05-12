#include<iostream>
using namespace std;

int fac(int n) {
    // Base case
    if (n == 1) {
        return 1;
    }
    return n * fac(n - 1);
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    
    cout << "factorial of " << n << " is: " << fac(n) << endl;
}