#include <iostream>
using namespace std;

class Account {
private:
    int accountNumber;
    double balance;

public:
    void setAccountNumber(int accNo) {
        accountNumber = accNo;
    }

    void setBalance(double bal) {
        balance = bal;
    }

    int getAccountNumber() {
        return accountNumber;
    }

    double getBalance() {
        return balance;
    }
};

int main() {
    Account acc;
    int accNo;
    double bal;

    cout << "Enter account number: ";
    cin >> accNo;
    cout << "Enter balance: ";
    cin >> bal;

    acc.setAccountNumber(accNo);
    acc.setBalance(bal);

    cout << "\n--- Account Details ---" << endl;
    cout << "Account Number: " << acc.getAccountNumber() << endl;
    cout << "Balance: " << acc.getBalance() << endl;

    return 0;
}
