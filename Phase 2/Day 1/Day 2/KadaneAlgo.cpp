#include <iostream>
#include <vector>
#include <climits>
using namespace std;

int main() {
    vector<int> arr = {-2, -3, 4, -1};

    int currentSum = 0;
    int maxSum = INT_MIN;

    for (int x : arr) {
        currentSum += x;
        maxSum = max(maxSum, currentSum);

        if (currentSum < 0) {
            currentSum = 0;
        }
    }

    cout << "Maximum Subarray Sum = " << maxSum << endl;

    return 0;
}