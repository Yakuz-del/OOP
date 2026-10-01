#include <iostream>
#include <string>

using namespace std;

class BankAccount {
private:
    string host;
    double B;
    const int AKn;

public:
    BankAccount(const string& own, int accNum)
        : host(own), B(0.0), AKn(accNum) {
    }

    void Deposit(double amount) {
        if (amount > 0) {
            B += amount;
            cout << "Account credited by " << amount << ". Current balance: " << B << endl;
        }
    }

    void Withdraw(double amount) {
        if (amount > B) {
            cout << "Error: Insufficient funds! Balance: " << B << ", Requested: " << amount << endl;
        }
        else if (amount > 0) {
            B -= amount;
            cout << "Withdrawn " << amount << ". Current balance: " << B << endl;
        }
    }

    void Print() const {
        cout << "Host: " << host << ", Account No.: " << AKn << ", Balance: " << B << endl;
    }
};

int main() {
    BankAccount myAccount("Andry", 123456789);
    myAccount.Print();

    myAccount.Deposit(1000.0);
    myAccount.Withdraw(300.0);
    myAccount.Withdraw(800.0);

    return 0;
}