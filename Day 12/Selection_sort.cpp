#include<iostream>
using namespace std;

void selection_sort(int nums[], int n) {
    for (int i = 0; i < n - 1; i++) {
        int minindex = i;
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[minindex]) {
                minindex = j;
            }
        }
        swap(nums[i], nums[minindex]);
    }
}

int main() {
    int arr[5] = {1, 3, 2, 5, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}