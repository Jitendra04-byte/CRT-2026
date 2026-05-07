#include<iostream>
using namespace std;
class Cricketer {
    public:
    string name;
    int runs;
    double average;
    Cricketer(string n,int r, double avg) {
        name = n;
        runs = r;
        this->average = avg;
    }

    void show() {
        cout <<"Name:"<<name<<endl;
        cout <<"runs:"<<runs<<endl;
        cout <<"average:"<<average<<endl;
    }


};
int main() {
    Cricketer c1("Virat kohli",12000, 58.16);
    c1.show();
    return 0;
}