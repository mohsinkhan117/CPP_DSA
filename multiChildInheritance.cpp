#include <iostream>
#include <string>
#include <limits>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    virtual string getType() const { return "Person"; }

    void inputDetails()
    {
        cout << "Enter Name: ";
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayDetails() const
    {
        cout << getType() << " has -> ";
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    char grade;

public:
    string getType() const override { return "Student"; }

    void inputStudentDetails()
    {
        inputDetails();
        cout << "Enter Grade: ";
        cin >> grade;
    }

    void displayStudentDetails() const
    {
        displayDetails();
        cout << "Grade: " << grade << endl;
    }
};

class Employee : public Person
{
private:
    int salary;

public:
    string getType() const override { return "Employee"; }

    void setEmployeeDetails()
    {
        cout << "Enter Employee Details:" << endl;
        inputDetails();
        cout << "Salary: ";
        cin >> salary;
    }

    void displayEmployeeDetails()
    {
        displayDetails();
        cout << "Salary: " << salary << endl;
    }
};

int main()
{
    Student s;
    s.inputStudentDetails();
    s.displayStudentDetails();

    Employee e;
    e.setEmployeeDetails();
    e.displayEmployeeDetails();

    return 0;
}
