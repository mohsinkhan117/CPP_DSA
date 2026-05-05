#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    int size;
    int sum = 0;

    cout << "Enter size of the array" << endl;
    cin >> size;

    int *array = new int[size];
    for (int i = 0; i < size; i++)
    {
        *(array + i) = rand() % 101;
    }
    cout << "Array ramdomly generated Elements are " << endl;
    for (int i = 0; i < size; i++)
    {
        cout << *(array + i) << " ";
    }
    for (int i = 0; i < size; i++)
    {
        sum += *(array + i);
    }
    cout << "\nsum of the array numbers is " << sum << endl;
    cout << "Deleting the Array as there is no more need of it " << endl;
    delete[] array;
    cout << "Array now " << array << endl;
    cout << "Releasing the pointer " << endl;
    array = nullptr;
    cout << "Pointers now " << *array;

    return 0;
}
