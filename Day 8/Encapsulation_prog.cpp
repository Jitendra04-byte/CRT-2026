#include<iostream>
using namespace std;


class ATM {
    private:
    int balance;
    public:

    //Encapsulation
    void setBalance(int balance) {
        this->balance = balance;
    }

    // Withdraw method of ATM
    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient blanace" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
    }

    int getBalance() {
        
        return balance;

    }
};

int main() {
    int n;
    cin>>n;
    ATM a; // Initial balance of 5000
    a.setBalance(n);
    cout<<" Balance is: "<<a.getBalance()<<endl; 
    a.withdraw(500);
    cout<<"Balance is: "<<a.getBalance()<<endl;

    return 0;
}