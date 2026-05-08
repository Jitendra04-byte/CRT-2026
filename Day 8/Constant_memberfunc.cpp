#include<iostream>
using namespace std;

class Car {
    private:
    int speed;

    public:
    Car() {
        speed = 120;
    }

    void showSpeed() const {
        cout<<"speed is: " << speed << endl;
    }
};

int main() {
    Car c;
    c.showSpeed();

    return 0;
}