#include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor to initialize account
    BankAccount(string name, double initialBalance) {
        this->accountHolder = name;
        if (initialBalance >= 0)
            this->balance = initialBalance;
        else {
            this->balance = 0;
            cout << "Initial balance cannot be negative"<<endl;
        }
    }

    // Deposit money
    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        } else {
            cout << "Invalid deposit amount"<< endl;
        }
    }

    // Withdraw money
    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        } else {
            cout << "Invalid withdrawal amount or insufficient balance"<< endl;
        }
    }

    // Display account details
    void display() {
        cout << "Account Holder: " << accountHolder << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main() {
    BankAccount acc("Arun", 5000);

    acc.display();
    acc.deposit(2000);
    acc.withdraw(1000);
    acc.withdraw(7000); 
     acc.withdraw(500);
    acc.display();

    return 0;
}
