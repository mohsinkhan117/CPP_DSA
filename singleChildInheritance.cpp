#include <iostream>
#include <string>
using namespace std;

class Person
{
private:
    string name;
    int age;

public:
    void inputDetails()
    {
        cout << "Enter Name: ";
        getline(cin, name);
        cout << "Enter Age: ";
        cin >> age;
        cin.ignore();
    }

    void displayDetails() const
    {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
    }
};

class Student : public Person
{
private:
    char grade;

public:
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

int main()
{
    Student s;
    s.inputStudentDetails();
    cout << "\nStudent Details:\n";
    s.displayStudentDetails();

    return 0;
}
