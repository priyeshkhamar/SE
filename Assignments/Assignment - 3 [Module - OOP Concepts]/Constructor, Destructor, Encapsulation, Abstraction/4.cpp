//  Write a C++ program to implement a class called Bank Account that has
// private member variables for account number and balance. Include
// member functions to deposit and withdraw money from the account.

#include <iostream>
using namespace std;

class BankAccount
{
private:
    string accountNumber;
    double balance;

public:
    // Function to initialize account number and balance
    void initialize(string accNumber, double initialBalance)
    {
        accountNumber = accNumber;
        balance = initialBalance;
    }

    // Function to deposit money into the account
    void deposit(double amount)
    {
        balance = balance + amount;
        cout << "Successfully deposited Rs." << amount << " into the account."
             << "\n";
    }

    // Function to withdraw money from the account
    void withdraw(double amount)
    {
        if (amount > balance)
        {
            cout << "Error: Insufficient balance. Withdrawal failed."
                 << "\n";
        }
        else
        {
            balance = balance - amount;
            cout << "Successfully withdrawn Rs." << amount << " from the account."
                 << "\n";
        }
    }

    // Function to display account information
    void displayAccountInfo()
    {
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Current Balance: Rs." << balance << "\n";
    }
};

int main()
{
    BankAccount obj;

    string accNumber;
    double initialBalance;

    cout << "Enter Account Number: ";
    cin >> accNumber;

    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    obj.initialize(accNumber, initialBalance);

    // Display initial account information
    cout << "\nInitial Account Information:"
         << "\n";
    obj.displayAccountInfo();

    // Deposit Rs.500
    double depositAmount;
    cout << "\nEnter amount to deposit: ";
    cin >> depositAmount;
    obj.deposit(depositAmount);

    // Withdraw Rs.200
    double withdrawAmount;
    cout << "\nEnter amount to withdraw: ";
    cin >> withdrawAmount;
    obj.withdraw(withdrawAmount);

    // Display updated account information
    cout << "\nUpdated Account Information:"
         << "\n";
    obj.displayAccountInfo();

    return 0;
}
