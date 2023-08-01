// Assume a class cricketer is declared. Declare a derived class batsman from cricketer. Data member of batsman. Total runs, Average runs and best performance. Member functions input data, calculate average runs, Display data. (Single Inheritance)

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
        cout << "Enter Cricketer's Name: ";
        getline(cin, name);

        cout << "Enter Cricketer's Age: ";
        cin >> age;
        cin.ignore();
    }
};

   class Batsman : public Cricketer 
   {
    private:
    int totalRuns;
    double averageRuns;
    int bestPerformance;
    public:
    void inputData() 
	{
        Cricketer::inputData(); 

        cout << "Enter Total Runs: ";
        cin >> totalRuns;

        cout << "Enter Best Performance (highest runs in an innings): ";
        cin >> bestPerformance;

        averageRuns = static_cast<double>(totalRuns) / 5; 
    }

    void displayData() 
	{
        cout << "\nBatsman Details:" << endl;
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Total Runs: " << totalRuns << endl;
        cout << "Average Runs: " << averageRuns << endl;
        cout << "Best Performance: " << bestPerformance << " runs" << endl;
    }
};

int main() 
{
    Batsman batsman;
    batsman.inputData();
    batsman.displayData();

    return 0;
}
