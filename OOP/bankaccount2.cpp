#include <iostream>
#include <string>  
using namespace std;

class BankAccount{
    string accountNumber;
    double balance;
public:
    BankAccount() : accountNumber(""), balance(0) {}
    BankAccount(string an, double b) : accountNumber(an), balance(b) {}
    string getAccountNumber() {return accountNumber;}
    double getBalance() {return balance;}
    void setBankAccount(string a, double b) {
        if (b >= 0)
        {
            accountNumber = a;
            balance = b;
        }
    }
    void deposit(double amt) {
        if(amt > 0) balance += amt;
    }
    void withdraw(double amt) {
        if(balance >= amt) balance -= amt;
    }
    double operator+(const BankAccount& other) const{
        return balance + other.balance;
    }
};

int main() {

}