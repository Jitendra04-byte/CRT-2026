#include<iostream>
using namespace std;

//Base class or parent class
class Player {
    public:
    string name;
    int age;

    void setName (string n) {
        name = n;
    }
};

//Deriver class or Child class
class Cricketer : public Player {
    public:
    int runs;
    void setruns (int r) {
        runs = r;

    }

    void show(){
        cout<<"Name: "<<name<<endl;
        cout<<"Runs: "<<runs<<endl;
    }
};

int main() {
    int r;
    cin>>r;
    Cricketer c1;
    c1.setName("Virat Kohli");
    c1.setruns(r);
    c1.show();
    return 0;
}
