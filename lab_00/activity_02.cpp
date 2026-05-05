#include <iostream>
#include <cstring> // Include for strcpy
using namespace std;

struct Student
{
    char Name[50];
    int age;
    float cgpa;

    Student()
    {
        strcpy(Name, "");
        age = 0;
        cgpa = 0.0;
    }

    Student(const char n[], int a, float c)
    {
        strcpy(Name, n);
        age = a;
        cgpa = c;
    }

    void show()
    {
        cout << "Student Details" << endl
             << "Name: " << Name << endl
             << "Age: " << age << endl
             << "CGPA: " << cgpa << endl;
    }
};

int main()
{
    Student s1("Ali Khalid", 22, 2.8);
    Student s2;

    strcpy(s2.Name, "Mohsin Khan");
    s2.age = 21;
    s2.cgpa = 3.2;

    s1.show();
    s2.show();

    return 0;
}