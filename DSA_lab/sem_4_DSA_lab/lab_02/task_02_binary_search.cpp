#include <iostream>
using namespace std;
int binarySearch(int arr[], int size, int value)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == value)
        {
            return mid;
        }
        else if (arr[mid] < value)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 6, 7, 8, 10};
    int target = 10;
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "\nBinary Search: \n"
         << endl;
    int binaryResult = binarySearch(arr, size, target);
    if (binaryResult != -1)
    {
        cout << target << " Found at index " << binaryResult << endl;
    }
    else
    {
        cout << target << " not found." << endl;
    }

    return 0;
}