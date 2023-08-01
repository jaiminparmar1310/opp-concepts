#include <iostream>
#include <string>
using namespace std;


class Person {
protected:
    string name;
    int age;

public:

    Person(string name, int age) : name(name), age(age) {}

    void readData() {
        cout << "Enter name: ";
        getline(cin, name);
        cout << "Enter age: ";
        cin >> age;
        cin.ignore(); 
    }

    void writeData() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person {
protected:
    float percentage;

public:
    
    Student(string name, int age, float percentage)
        : Person(name, age), percentage(percentage) {}

    
    void readData() {
        Person::readData();
        cout << "Enter percentage: ";
        cin >> percentage;
        cin.ignore(); 
    }


    void writeData() {
        Person::writeData(); 
        cout << "Percentage: " << percentage << "%" << endl;
    }
};

class Teacher : public Person {
protected:
    double salary;

public:

    Teacher(string name, int age, double salary)
        : Person(name, age), salary(salary) {}

    
    void readData() 
	{
        Person::readData(); 
        cout << "Enter salary: ";
        cin >> salary;
        cin.ignore(); 
    }

    void writeData() 
	{
        Person::writeData(); 
        cout << "Salary: $" << salary << endl;
    }
};

int main() 
{
    Student student("John Doe", 20, 85.5);
    Teacher teacher("Jane Smith", 35, 50000.0);

    cout << "Enter data for student:" << endl;
    student.readData();
    cout << "\nStudent details:" << endl;
    student.writeData();

    cout << "\nEnter data for teacher:" << endl;
    teacher.readData();
    cout << "\nTeacher details:" << endl;
    teacher.writeData();

    return 0;
}
