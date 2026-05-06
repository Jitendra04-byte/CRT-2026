#include<iostream>
using namespace std;

void discount(float &bill) {
    bill = bill - (bill * 0.10);
}
 int main() {
    float bill;
    cout << "Enter the bill amount: ";
    cin >> bill;
    discount(bill);
    cout << "discounted bill: " << bill << endl;
    return 0;
 }