#include <iostream>
using namespace std;
int main()
{
    char value[10] = {'P', 'a', 'k', 'i', 's', 't', 'a', 'n'}; // declaration
    // cout << value[0];
    // cout << value[1];
    // cout << value[2];
    // cout << value[3];
    // cout << value[4];
    // cout << value[5];
    // cout << value[6];
    // cout << value[7];
    // cout << value[8];
    cout << endl;
    static int i = 0;

    // do
    // {

    //     cout << value[i] << " ";
    //     i++;
    // }
    while (10 < 9)
    { /// false
        cout << value[i];
        i++;
    }; // flase
    cout << "\nwhile is false";
}