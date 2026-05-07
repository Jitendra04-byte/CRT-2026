#include<iostream>
using namespace std;
class Area {
    public:
    int length;
    int breadth;
    Area() {
        length = 0;
        breadth = 0;
    }
    
    Area(int l, int b) {
        this->length = l;
        breadth = b;
    }

    void display() {
        cout<<"Area is :"<< length*breadth <<endl;
    }
};
int main() {
    Area a1;
    a1.display();
    Area a2(5, 5);
    a2.display();
    Area a3(10, 10);
    a3.display();
    return 0;
}