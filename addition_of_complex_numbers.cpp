#include <iostream>
using namespace std;
class ComplexNumbers
{
private:
    float a = 0, b = 0;
    static int count;

public:
    void setData()
    {
        cout << "Enter " << count << " complex Number\n";
        cout << "Enter Real Part ";
        cin >> a;
        cout << "Enter Imagenary Part ";
        cin >> b;
        count++;
    }
    void sumOfImagenary(ComplexNumbers o1, ComplexNumbers o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
        cout << "sum of the two imagenary numbers is " << a << " + " << b << "i";
    }
    void printData()
    {
        cout << "your Imagenary number is " << a << " + " << b << "i" << endl;
    }
};
int ComplexNumbers::count = 1;
int main()
{
    ComplexNumbers n1, n2, n3;
    n1.setData();
    n1.printData();
    n2.setData();
    n2.printData();
    n3.sumOfImagenary(n1, n2);
}