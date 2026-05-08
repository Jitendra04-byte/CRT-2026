#include<iostream>
using namespace std;

class Employee {
    public:
    static int reg_no;

    Employee() {
        reg_no++;
    }

    static void show() {
        cout<<"Employee registration number: "<<reg_no<<endl;
    }
};

int Employee ::reg_no = 111;
int main(){
    Employee e1;
    Employee e2;
    Employee e3;
    Employee e4;
    Employee :: show();
}