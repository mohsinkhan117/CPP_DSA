#include <iostream>
#include <string>
using namespace std;

class Shop
{
    string itemId[100];
    int itemPrice[100];
    int count = 0;
    char end;

public:
    void setPrice();
    void displayPrice();
};
void Shop::setPrice()

{
    cout << "NOTE: Enter n or N to end price initialization\n";
    do
    {
        cout << "Enter item ID to set its Price\n";
        cin >> itemId[count];
        cout << "Enter item Price \n";
        while (true)
        {
            cin >> itemPrice[count];
            if (cin.fail())
            {
                cin.clear();
                cin.ignore(1000, '\n');
                cout << "❌ Invalid input. Please enter an integer for item Price: ";
            }
            else
            {
                break;
            }
        }
        count++;
        cout << "Do you want to add another item y/n ";
        cin >> end;
    } while (end != 'n' && end != 'N');
}
void Shop::displayPrice()
{
    for (int i = 0; i < count; i++)
    {
        cout << "The Price of itemID \'" << itemId[i] << "\' is " << itemPrice[i];
    }
}

int main()
{
    Shop shop;
    shop.setPrice();
    shop.displayPrice();
}
