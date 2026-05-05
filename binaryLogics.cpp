#include <iostream>
#include <string>
using namespace std;

class binaryLogics
{
private:
    string s;

public:
    void getNumber(void);
    void display(void);
    void invert(void);
    void checkBinary(void);
};

void binaryLogics::getNumber(void)
{
    cout << "enter a binary number: ";
    cin >> s;
}

void binaryLogics::display()
{
    cout << "\ndisplaying your number: ";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

void binaryLogics::invert()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
            s.at(i) = '1';
        else
            s.at(i) = '0';
    }
}
void binaryLogics ::checkBinary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')

        {
            // continue;
            cout << "The number is not binary\n";
            exit(0);
        }
        else
        {
            cout << "the number is a valid binary\n";
        }
    }
}

int main()
{
    binaryLogics b;
    b.getNumber();
    b.checkBinary();
    b.display();
    b.invert();
    b.display();
    return 0;
}
