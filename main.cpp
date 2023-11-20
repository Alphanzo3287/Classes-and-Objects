// Alphanzo Moore
// CIS-5 Online
// November 5, 2023
// Assignment 13A: Classes and Objects

//Procedural programming is a programming paradigm that uses procedures and functions to solve problems.

//Object-oriented programming is a programming paradigm that uses objects to represent real-world things.

//Class is a user-defined data type that defines the attributes and behaviors of an object. Object is an instance of a class.

//Instance is an object of a class.

//Private member variables are variables that are only accessible within the class.

//Public member functions are functions that are accessible outside the class.

//Constructor is a special member function that is called automatically when an object is created.

//In Line Functions is a function that is declared inline.

//Member Functions are functions that are defined outside the class.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    double balance;

public:
    BankAccount(double startingBal)
    {
        balance = startingBal;
    }

    void deposit(double amount)
    {
        balance += amount;
    }

    void withdraw(double amount)
    {
        balance -= amount;
    }

    double getBalance() const
    {
        return balance;
    }
};

int main()
{
    BankAccount savingsAccount(2500.0);
    BankAccount checkingAccount(500.0);

    savingsAccount.deposit(500.0);
    checkingAccount.withdraw(200.0);

    cout << "Savings Account balance: $" << savingsAccount.getBalance() << endl;
    cout << "Checking Account balance: $" << checkingAccount.getBalance() << endl;

    return 0;
}