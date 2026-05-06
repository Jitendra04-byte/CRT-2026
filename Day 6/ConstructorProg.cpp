#include<iostream>
using namespace std;
class student {
    public:
    string name;
    int roll;

    student(){
        name="Jitendra";
        roll=1286;  
    }


    void display() {
        cout<<"Name:"<<name<<endl;
        cout<<"Roll number:"<<roll<<endl;
        cout<<"Default constructor called"<<endl;
    }
};
int main() {
    student s1;
    s1.display();
    return 0;
}
