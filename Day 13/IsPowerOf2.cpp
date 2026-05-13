#include<iostream>
using namespace std;

bool isPow(int n) {
    if (n == 0) {
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
        bool result = isPow(n);
        if(result){
            cout << n << " is a power of 2: " << endl;
        }
        else{
            cout << n << " is not a power of 2: " << endl;
        }

        
    }
    return 0;                            
}