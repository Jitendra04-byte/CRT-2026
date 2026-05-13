#include<iostream>
using namespace std;

bool isPow(int n) {
    if (n <= 0) {
        return false;
    }
    if (n == 1) {
        return true;
    }
    return (n % 2 == 0) && isPow(n / 2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cout << "Enter the value of n: ";
        cin >> n;

        cout << n << "is a power of 2: " <<  isPow(n) << endl;

        
    }
    return 0;
}