#include <iostream>
using namespace std;

void selectionSort(int arr[], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        int min = i;

        for (int j = i + 1; j < size; j++)
        {
            if (arr[j] < arr[min])
            {
                min = j;
            }
        }

        if (min != i)
        {
            swap(arr[i], arr[min]);
        }
    }
}

int main()
{
    int arr[] = {3, 5, 1, 2, 6, 4};
    int size = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}