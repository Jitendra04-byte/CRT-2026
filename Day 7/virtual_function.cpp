#include<iostream>
using namespace std;

class Player {
    public:

    virtual void show() {
        cout<<"Player class show function"<<endl;
    }
};

class Cricketer : public Player {
    public:
    int a;

    void show(){
        cout<<"Cricketer class show function"<<endl;
    }
};

int main() {
    Cricketer c1;
    c1.show();
    return 0;
}