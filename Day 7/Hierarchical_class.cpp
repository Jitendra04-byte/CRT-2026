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
class Cricketer : public Player {
    public:
    int runs;
    void setRuns (int r) {
        runs = r;

    }

    void show() {
        cout<<"Name:"<<name<<endl;
        cout<<"Runs:"<<runs<<endl;
    }
};
// deriver class or child class of Player class
class Footballer : public Player {
    public:
    int goals;

    void setGoals (int g) {
        goals = g;  
    }

    void show() {
        cout<<"Name:"<<name<<endl;
        cout<<"Goals:"<<goals<<endl;
    }

};

int main() {
    
    Cricketer c1;
    c1.setName("Virat Kohli");
    c1.setRuns(12000);
    c1.show();

    Footballer f1;
    f1.setName("Lionel Messi");
    f1.setGoals(900);
    f1.show();
    return 0;
}
