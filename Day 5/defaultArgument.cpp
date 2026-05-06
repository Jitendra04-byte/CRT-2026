#include <iostream>
using namespace std;

void msg(string a = " ") {
    cout << "Hello " << a << endl;
}
int main() {
    msg();
    msg("Sir");
    return 0;
}