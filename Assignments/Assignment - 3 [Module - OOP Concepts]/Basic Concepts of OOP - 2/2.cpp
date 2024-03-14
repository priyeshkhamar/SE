// Define a class to represent a bank account.
// Include the following members :
// Data Member : -Name of the depositor - Account Number - Type of Account - Balance amount in the account
// Member Functions - To assign values - To deposited an amount - To withdraw an amount after checking balance - To display name and balance

#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string depositorName;
    string accountNumber;
    string accountType;
    int balance;

public:
    // Function to initialize data members
    void initialize(string name, string accNumber, string accType, int initialBalance)
    {
        depositorName = name;
        accountNumber = accNumber;
        accountType = accType;
        balance = initialBalance;
    }

    // Function to deposit an amount
    void deposit(int amount)
    {
        if (amount <= 0)
        {
            cout << "Invalid deposit amount. Please enter an amount greater than 0."
                 << "\n";
        }
        else
        {
            balance = balance + amount;
            cout << "Successfully deposited Rs. " << amount << " into the account!"
                 << "\n";
        }
    }

    // Function to withdraw an amount after checking balance
    void withdraw(int amount)
    {
        if (amount > balance)
        {
            cout << "Insufficient balance. Withdrawal failed!"
                 << "\n";
        }
        else
        {
            balance = balance - amount;
            cout << "Successfully withdrawn Rs. " << amount << " from the account!"
                 << "\n";
        }
    }

    // Function to display name and balance
    void display()
    {
        cout << "Depositor Name: " << depositorName << "\n";
        cout << "Account Number: " << accountNumber << "\n";
        cout << "Account Type: " << accountType << "\n";
        cout << "Current Balance: Rs. " << balance << "\n";
    }
};

int main()
{
    BankAccount obj;

    string name, accNumber, accType;
    double initialBalance;

    cout << "Enter depositor name: ";
    cin >> name;
    cout << "Enter account number: ";
    cin >> accNumber;
    cout << "Enter account type [Savings/Current]: ";
    cin >> accType;
    cout << "Enter initial balance: Rs. ";
    cin >> initialBalance;

    obj.initialize(name, accNumber, accType, initialBalance);

    obj.display(); // Display initial details
    cout << "\n";

    int depositAmount, withdrawAmount;

    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    obj.deposit(depositAmount); // Deposit amount

    cout << "\n"
         << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    obj.withdraw(withdrawAmount); // Withdraw amount

    obj.display(); // Display details after withdrawal

    return 0;
}