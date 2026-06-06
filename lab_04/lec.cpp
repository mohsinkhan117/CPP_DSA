// buble sort
// average sort
//  Example array:  [5,3,8,4,2]
// traditional sorting algorithm using temporary variabe for storing the old variables
#include <iostream>
using namespace std;
void bubble_sort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    cout << "\nBubble sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// selection sort
// worst algorithm
void selection_sort(int arr[], int size)
{
    int min;
    for (int i = 0; i < size - 1; i++)
    {
        min = i;
        for (int j = 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
            swap(arr[i], arr[min]);
            // int temp = arr[j];
            // arr[j] = arr[j + 1];
            // arr[j + 1] = temp;
        }
    }
    cout << "\nSelection sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
// insertion sort
// best sorting algorithm
void insertion_sort(int arr[], int size)
{
    int key, j;
    for (int i = 1; i < size; i++)
    {
        key = arr[i];
        j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
    cout << "\nInsertion sort: ";
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[5] = {5, 3, 8, 4, 2};
    cout << "\noriginal array: ";
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    bubble_sort(arr, 5);
    selection_sort(arr, 5);
    insertion_sort(arr, 5);
}