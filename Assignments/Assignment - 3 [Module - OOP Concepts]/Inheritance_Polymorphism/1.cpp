// Assume class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

#include <iostream>
#include <string>

using namespace std;

class Cricketer
{
protected:
    string name;
    int age;

public:
    void inputData()
    {
        cout << "Enter Name: ";
        cin >> name;
        cout << "Enter Age: ";
        cin >> age;
    }
};

class Batsman : public Cricketer
{
private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;

public:
    void inputBatsmanData()
    {
        cout << "Enter total runs: ";
        cin >> totalRuns;
        cout << "Enter best performance: ";
        cin >> bestPerformance;
        cin.ignore(); // Ignore newline character in the input buffer
        calculateAverageRuns();
    }

    void calculateAverageRuns()
    {
        averageRuns = totalRuns / 50.0; // Assuming 50 matches played on average
    }

    void displayData()
    {
        cout << "\nBatsman Details:\n";
        cout << "Name: " << name << "\n";
        cout << "Age: " << age << "\n";
        cout << "Total Runs: " << totalRuns << "\n";
        cout << "Average Runs: " << averageRuns << "\n";
        cout << "Best Performance: " << bestPerformance << "\n";
    }
};

int main()
{
    Batsman player1;

    cout << "Enter Details for the Batsman:\n";
    player1.inputData();
    player1.inputBatsmanData();

    player1.displayData();
}