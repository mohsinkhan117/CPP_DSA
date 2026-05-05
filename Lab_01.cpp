#include <iostream>
using namespace std;
class Complex
{
private:
    float real = 0.0, imagenary = 0.0;

public:
    void setData()
    {
        cout << "Initiate real part" << endl;
        cin >> real;
        cout << "Initiate imagenary part" << endl;
        cin >> imagenary;
    }
    void printData()
    {
        cout << " your imagenary number is \n"
             << real;
        if (imagenary < 0)
        {
            cout << "";
        }
        else
        {
            cout << " + ";
        }
        cout << imagenary << "i" << endl;
    }
};
int main()
{
    Complex z;
    z.setData();
    z.printData();
    z.setData();
    z.printData();
    z.setData();
    z.printData();
    z.setData();
    z.printData();
    return 0;
}