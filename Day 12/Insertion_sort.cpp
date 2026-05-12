#include<iostream>
using namespace std; 


void insertion_sort(int nums[], int n) {
    for (int i =0; i < n - 1; i++) {
        int key = nums[i];
        int j = i - 1;
        while(j >= 0 && nums[j] > key) {
            nums[j + 1] = nums[j];
            j--;
        }

        nums[j + 1] = key;
    }


}

int main() {
    int arr[5]= {1,3,2,5,4};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertion_sort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
}