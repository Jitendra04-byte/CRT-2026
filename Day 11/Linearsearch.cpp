#include<iostream>
using namespace std;

int Linear_search(int nums[], int n, int target) {
    for (int i = 0; i < n; i++) {
        if (nums[i] == target) {
            return i;
        }
    }
    return -1; // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    int ans = Linear_search(arr, n, 3);
    cout << "Element found at index: " << ans << endl;

    return 0;
}