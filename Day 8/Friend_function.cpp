#include<iostream>
using namespace std;

class Area {
    private:
    int lenght;
    int breadth;
    public:

    void setSides(int l, int w) {
        lenght = l;
        breadth = w;

    }
    //friend function declaration
    friend void showArea(Area a);
};

//friend function definition
void showArea(Area b) {
    int area =b.lenght * b.breadth;
    cout<<"Area is: "<<area<<endl;
}


int main() {
    Area a;
    a.setSides(2, 4);
    showArea(a);

    return 0;
}