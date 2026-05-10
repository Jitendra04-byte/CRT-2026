#include<iostream>
using namespace std;

void reverseArray(int nums[], int n) {
    int i = 0;
    int j = n-1;
    
    while (i < j) {
        int temp = nums[i];
        nums[i] = nums[j];
        nums[j] = temp;
        i++;
        j--;

    }
    for (int i=0; i<n; i++) {
        cout<<nums[i]<<" ";
    }
}

int main() {
    int nums[5] = {10, 20, 30, 40, 50};
    int n = sizeof(nums)/sizeof(nums[0]);
    reverseArray(nums, n);
    return 0;
}