#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int value)
{
    for (int i = 0; i <= size; i++)
    {
        if (arr[i] == value)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 6, 7, 8, 10};
    int target = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Linear Search: \n"
         << endl;
    int linearResult = linearSearch(arr, size, target);
    if (linearResult != -1)
    {
        cout << target << " Found at index " << linearResult << endl;
    }
    else
    {
        cout << target << " not found." << endl;
    }
}