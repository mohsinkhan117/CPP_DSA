
#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
    int i, key, j;

    // Start from the second element (i=1)
    for (i = 1; i < n; i++)
    {
        key = arr[i]; // Element to be inserted
        j = i - 1;    // Start comparing with the last element of the sorted subarray

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key; // Insert the key into its correct position
    }
    for (int i = 0; i <= n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[] = {12, 11, 13, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    insertionSort(arr, n);

    return 0;
}