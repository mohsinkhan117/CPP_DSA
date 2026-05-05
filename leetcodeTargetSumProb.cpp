#include <iostream>
using namespace std;
int main()
{
    int size = 0;
    int index1 = 0;
    int index2 = 0;
    bool isfound = false;
    cout << "Enter size of your array ";
    cin >> size;

    int *array = new int[size];
    cout << "Enter Array elements\n";
    for (int i = 0; i < size; i++)
    {
        cin >> *(array + i);
    }
    int target = 0;
    cout << "Enter the target ";
    cin >> target;
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            sum = *(array + i) + *(array + j);
            index1 = i;
            index2 = j;
            if (target == sum)
            {
                isfound = true;
                break;
            }
            else

                isfound = false;
        }
        if (isfound)
            break;
    }

    if (isfound)
    {
        cout << "[" << index1 << ", " << index2 << "]";
    }
    else

        cout << "No elements addition is equal to your targeted value " << target << endl;
    delete[] array;
}