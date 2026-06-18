#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 5, 7, 9, 10};

    int n = arr.size();

    for (int i = 0; i < n; i++) {
        int sum = 0;

        for (int j = i; j < n; j++) {
            sum += arr[j];
            cout << "Subarray [" << i << "," << j << "] Sum = "
                 << sum << endl;
        }
    }

    return 0;
}