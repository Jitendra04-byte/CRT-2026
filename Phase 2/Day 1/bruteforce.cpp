#include<iostream>
using namespace std;

int main() {
    int arr[5] = {3,5,6,7,10};
    int target =12;
    for (int i=0; i<5; i++) {
        for (int j=i+1; j<5; j++) {
            if (arr[i] + arr[j] == target) {
                cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
                return 0;
            }
        }
    }
    cout << "No pair found." << endl;
    return 0;
}