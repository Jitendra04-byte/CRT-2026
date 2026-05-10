#include<iostream>
using namespace std;

class sum{
    public:
    int sumofarray(int nums[], int n) {
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += nums[i];
        
        }
        return sum;
    }
};

int main() {
    int arr[5]= {1, 2, 3, 4, 5};
    int size = sizeof(arr)/sizeof(arr[0]);
    sum s1;
    int ans =s1.sumofarray(arr, size);
    cout<<ans<<endl;
    return 0;
}

