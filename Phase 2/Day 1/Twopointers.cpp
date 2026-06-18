#include<iostream>
using namespace std;
int main() {
    int arr[5] = {3,5,6,7,10};
    int target =12;
    int left = 0;
    int right = 4;
    for (int i=0; int j= 4; i<j, i++, j--) {
        if (arr[i] + arr[j] == target) {
            cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
            return 0;
        }
        else if (arr[i] + arr[j] < target) {
            left++;
        }
        else {
            right--;
        }
    }
    cout << "No pair found." << endl;
    return 0;   
}