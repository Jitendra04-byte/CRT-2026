#include<iostream>
using namespace std;

int Binary_search(int nums[], int n, int target) {
    int left = 0;
    int right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (nums[mid] == target) {
            return mid; // Element found at index mid
        } else if (nums[mid] < target) {
            left = mid + 1; // Search in the right half
        } else {
            right = mid - 1; // Search in the left half
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int ans = Binary_search(arr, n, 3);
    cout << "Element found at index: " << ans << endl;
    return 0;
}