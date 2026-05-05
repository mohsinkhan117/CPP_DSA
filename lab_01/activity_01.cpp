#include <iostream>
using namespace std;
class LightBulb
{
private:
    bool isOn;

public:
    LightBulb()
    {
        isOn = false;
    }
    void turnOn()
    {
        isOn = true;
    }
    void turnOff()
    {
        isOn = false;
    }
    void getState()
    {
        cout << "Light is now ";
        if (isOn)
            cout << "ON" << endl;
        else
            cout << "OFF" << endl;
    }
};
int main()
{
    LightBulb l1;
    l1.getState();
    l1.turnOn();
    l1.getState();
    l1.turnOff();
    l1.getState();
}