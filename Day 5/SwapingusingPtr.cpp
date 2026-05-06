#include<iostream>
using namespace std;

int main() {
    int a = 10;
    int b = 20;
    int temp;
    int *ptr = &a;
    int *ptr2 = &b;
    cout << "before swapping: " << a << " and " << b << endl;
    temp = *ptr;
    *ptr = *ptr2;
    *ptr2 = temp;
    cout << "after swapping: " << a << " and " << b << endl;
    return 0;
}