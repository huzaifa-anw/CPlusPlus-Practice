#include <iostream>
#include <string.h>
using namespace std;

class BankAccount {
    string accountNumber, accountHolderName;
    double balance;  

    public:
        BankAccount() : accountNumber("N/A"), accountHolderName("Guest"), balance(0.0) {}
        BankAccount(string anum, string aname, double b) : accountNumber(anum), accountHolderName(aname), balance(b) {}
        ~BankAccount() {}

        string getAccountNumber() {return accountNumber;}
        string getAccountHolderName() {return accountHolderName;}
        double getBalance() {return balance;}

        void setAccountNumber(string an) {accountNumber = an;}
        void setAccountHolderName(string ahn) {accountHolderName = ahn;}
        void setBalance(double b) {
            if (balance < 0) {
                cout << "balance can not be 0 " << endl;
                return;
            }
            balance = b;
        }

        void display() const {
            cout << "Account Number: " << accountNumber << endl;
            cout << "Account Holder Name: " << accountHolderName <<endl;
            cout << "Balance: " << balance << endl;
        }

        void withdraw(double b) {
            if (b > balance) {
                cout << "insufficient funds" <<endl ;
                return;
            }
            balance -= b;
        }

        void deposit(double b) {
            balance += b;
        }
};
int main () {
    BankAccount b1("1", "Huzaifa", 60000);
    BankAccount b2("2", "Umar", 70000);

    b1.withdraw(70000);
    b1.display();

    b2.deposit(10000);
    b2.display();
    
    return 0;
}