#include<iostream>
using namespace std;
class student {
    private:
    int regno= 1111;
    public:
    string name;
    int roll;
    void display() {
        cout<<"name:"<<name<<endl;
        cout<<"rollnumber:"<<roll<<endl;
        cout<<"registration no.:"<<regno<<endl;
        regno++;
    }           
};

int main() {
    student s1;
    s1.name="Jitendra";
    s1.roll=1286;
}