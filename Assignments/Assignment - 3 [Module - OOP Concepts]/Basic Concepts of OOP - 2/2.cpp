// Define a class to represent a bank account.
// Include the following members :
// Data Member : -Name of the depositor - Account Number - Type of Account - Balance amount in the account
// Member Functions - To assign values - To deposited an amount - To withdraw an amount after checking balance - To display name and balance

#include <iostream>
using namespace std;

class Bank
{
public:
    int accnum, bal;
    string name, acctype;

    void assignValues()
    {
        cout << "Enter the Name of Depositor : ";
        cin >> name;

        cout << "Enter the Account Number : ";
        cin >> accnum;
    }
};
