//Assume that the test results of a batch of students are stored in three different classes. Class Students are storing the roll number. Class Test stores the marks obtained in two subjects and class result contains the total marks obtained in the test. The class result can inherit the details of the marks obtained in the test and roll number of students. (Multilevel Inheritance

#include <iostream>
using namespace std;

class Students 
{
 protected:
    int rollNumber;

 public:
    Students(int roll) : rollNumber(roll) {}
    void displayRollNumber() 
	{
        cout << "Roll Number: " << rollNumber << endl;
    }
};

class Test : public Students 
{
 protected:
    int subject1Marks;
    int subject2Marks;

 public:
    Test(int roll, int marks1, int marks2)
        : Students(roll), subject1Marks(marks1), subject2Marks(marks2) {}

    void displayMarks() 
	{
        cout << "Marks in Subject 1: " << subject1Marks << endl;
        cout << "Marks in Subject 2: " << subject2Marks << endl;
    }
};

class Result : public Test 
{
 public:
    Result(int roll, int marks1, int marks2)
        : Test(roll, marks1, marks2) {}

    void displayTotalMarks() 
	{
        int totalMarks = subject1Marks + subject2Marks;
        cout << "Total Marks: " << totalMarks << endl;
    }
};

int main() 
{
    Result result(101, 80, 90);
    result.displayRollNumber();
    result.displayMarks();
    result.displayTotalMarks();

    return 0;
}
