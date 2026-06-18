#include<ios>
using namespace std;

int main() {
    int arr[4] = {2,3,7,9};
    int x = 10;
    int n = 4;
    int i = 0;
    int j = n-1;
    for (int i=0; j = n-1; i <= j, i++, j--) {
        if (arr[i] + arr[j] == x) {
            cout << "Pair found: " << arr[i] << " and " << arr[j] << endl;
            return 0;
        }
        else if (arr[i] + arr[j] < x) {
            i++;
        }
        else {
            j--;
        }


    }
}