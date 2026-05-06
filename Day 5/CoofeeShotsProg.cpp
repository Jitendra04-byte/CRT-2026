#include<iostream>
using namespace std;

int main() {
    int shots;
    int totalvol;
    cout << "Enter the number of shots: ";
    cin >> shots;
    totalvol = shots * 30;
    cout << "Total volume of coffee: " << totalvol << " ml" << endl;
    return 0;
}