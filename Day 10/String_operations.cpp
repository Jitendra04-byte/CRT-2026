#include<iostream>
#include<string>
using namespace std;

int main() {
    string str1 = "Hello";
    string str2 = "Guys";
    cout<<str1<<" "<<str2<<endl;

    //length() of String method
    int n = str1.length();
    cout<<"Length of str1 is: "<<n<<endl;

    //Append() method of string
    cout<<"After appending str2 to str1: "<<str1.append("Friends")<<endl;

    //Empty() method of string
    cout<<"Is str1 empty? "<<str1.empty()<<endl;

    //Concatenation() of string
    cout<<"Concatenation of string is: "<<str1 + "Bachon"<<endl;
    cout<<"After concatenation str2 is: "<<str1<<endl;

    //push_back() method of string
    str2.push_back('!');
    cout<<"After push_back() method: "<<str2<<endl;

    //pop_back() method of string
    str2.pop_back();
    cout<<"After pop_back() method: "<<str2<<endl;

    //find() method of string
    int index = str1.find("lo");
    cout<<"Index of 'lo' in str1 is: "<<index<<endl;

    //at method of string
    char ch = str1.at(1);
    cout<<"Character at index 1 in str1 is: "<<ch<<endl;

    //swap() method of string
    str1.swap(str2);
    cout<<"After swapping str1 and str2: "<<endl;
    cout<<"str1: "<<str1<<endl;
    cout<<"str2: "<<str2<<endl;

    //substr() method of string
    string sub = str1.substr(0, 5);
    cout<<"Substring of str1 from index 0 to 4 is: "<<sub<<endl;

    //getline() method of string
    string str3;
    getline(cin, str3);
    cout<<"You entered: "<<str3<<endl;





    return 0;

}