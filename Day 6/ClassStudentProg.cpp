#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll;
    void printDetails() {
        cout<<"Name: "<<name<<endl;
        cout<<"Roll: "<<roll<<endl;
    }   
}
;
int main() {
    student s1;
    s1.name="Jitendra";
    s1.roll=1286;
    s1.printDetails();
    return 0;
}