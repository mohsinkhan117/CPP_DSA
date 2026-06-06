#include <iostream>
using namespace std;
int maxvalue(int arr[], int size)
{
    int max = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (max < arr[i])
        {
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    int arr[size];
    cout << "Enter Array size: ";
    cin >> size;
    cout << "Enter elements of array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> *(arr + i);
    }
    cout << "Maximum value among the elements is: " << maxvalue(arr, size);
}