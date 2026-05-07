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

//Deriver class or child class of Player class
// Parent or base class of indiancricketer class
class Cricketer : public Player {
    public:
    int runs;
    void setRuns (int r) {
        runs = r;

    }
};
// deriver class or child class of Cricketer class
class indianCricketer : public Cricketer{
    public:
    string state;

    void setState (string s) {
        state = s;
    }

    void show() {
        cout<<"Name:"<< name <<endl;
        cout<<"Runs:"<<runs<<endl;
        cout<<"State:"<<state<<endl;
    }
};

int main() {
    int r;
    cin>>r;
    string s;
    cin>>s;
    indianCricketer c1;
    c1.setName("Virat Kohli");
    c1.setRuns(r);
    c1.setState(s);
    c1.show();
    return 0;
}
