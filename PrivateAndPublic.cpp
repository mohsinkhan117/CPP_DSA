#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;
    int d, e; // better to keep these private too

public:
    // Constructor with default values
    Employee() : a(0), b(0), c(0), d(0), e(0) {}

    void setData(int a1, int b1, int c1)
    {
        a = a1;
        b = b1;
        c = c1;
    }

    void setDE(int d1, int e1)
    {
        d = d1;
        e = e1;
    }

    void getData()
    {
        cout << "value of a is " << a << endl;
        cout << "value of b is " << b << endl;
        cout << "value of c is " << c << endl;
        cout << "value of d is " << d << endl;
        cout << "value of e is " << e << endl;
    }
};

int main()
{
    Employee mohsin;
    mohsin.setData(1, 2, 3);
    cout << "Before setting d and e:" << endl;
    mohsin.getData();

    mohsin.setDE(38, 39);
    cout << "After setting d and e:" << endl;
    mohsin.getData();
}
