#include<iostream>
using namespace std;


class ATM {
    private:
    int balance;
    public:

    ATM(int initialBalance) {
        balance = initialBalance;
    }

    void withdraw(int amount) {
        if (amount > balance) {
            cout << "Insufficient blanace" << endl;
        } else {
            balance -= amount;
            cout << "Amount withdrawn: " << amount << endl;
        }
    }

    void showBalance() {
        cout<< "Current Balance: " << balance << endl;  

    }
};

int main() {
    ATM a(5000); // Initial balance of 5000
    a.withdraw(500);
    a.showBalance();

    return 0;
}