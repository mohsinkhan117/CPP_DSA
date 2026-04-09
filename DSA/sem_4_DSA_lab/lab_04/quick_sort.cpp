
#include <iostream>
#include <vector>
using namespace std;

// Partition function (Lomuto partition scheme)
int partition(vector<int> &array, int start, int end)
{
    int pivot = array[end]; // Last element as pivot
    int index = start - 1;  // Smaller element boundary

    for (int current = start; current < end; current++)
    {
        if (array[current] <= pivot)
        {
            index++;
            swap(array[current], array[index]);
        }
    }

    // Place pivot in correct position
    index++;
    swap(array[end], array[index]);

    return index; // Pivot index
}

// Quick Sort function
void quickSort(vector<int> &array, int start, int end)
{
    if (start < end)
    {
        int pivotIndex = partition(array, start, end);

        // Left subarray
        quickSort(array, start, pivotIndex - 1);

        // Right subarray
        quickSort(array, pivotIndex + 1, end);
    }
}

// Print function
void printArray(const vector<int> &array)
{
    for (int value : array)
    {
        cout << value << " ";
    }
    cout << endl;
}

// Main function
int main()
{
    vector<int> array = {12, 31, 35, 8, 32, 17};

    cout << "Original array: ";
    printArray(array);

    quickSort(array, 0, array.size() - 1);

    cout << "Sorted array: ";
    printArray(array);

    return 0;
}

// #include <iostream>
// using namespace std;

// // Function to swap two elements
// void swapValues(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }

// // Partition function
// int partition(int array[], int start, int end)
// {
//     int pivot = array[start];  // First element as pivot
//     int leftIndex = start + 1;
//     int rightIndex = end;

//     while (true)
//     {
//         // Move leftIndex to the right while elements are <= pivot
//         while (leftIndex <= end && array[leftIndex] <= pivot)
//         {
//             leftIndex++;
//         }

//         // Move rightIndex to the left while elements are > pivot
//         while (rightIndex >= start && array[rightIndex] > pivot)
//         {
//             rightIndex--;
//         }

//         // Swap if indices have not crossed
//         if (leftIndex < rightIndex)
//         {
//             swapValues(array[leftIndex], array[rightIndex]);
//         }
//         else
//         {
//             break;
//         }
//     }

//     // Place pivot at correct position
//     swapValues(array[start], array[rightIndex]);

//     return rightIndex; // Return pivot index
// }

// // Quick Sort function
// void quickSort(int array[], int start, int end)
// {
//     if (start < end)
//     {
//         int pivotIndex = partition(array, start, end);

//         // Recursively sort left and right parts
//         quickSort(array, start, pivotIndex - 1);
//         quickSort(array, pivotIndex + 1, end);
//     }
// }

// // Function to print array
// void printArray(int array[], int size)
// {
//     for (int index = 0; index < size; index++)
//     {
//         cout << array[index] << " ";
//     }
//     cout << endl;
// }

// // Main function
// int main()
// {
//     int array[] = {29, 10, 14, 37, 13, 5, 42, 18};
//     int size = sizeof(array) / sizeof(array[0]);

//     cout << "Original array: ";
//     printArray(array, size);

//     quickSort(array, 0, size - 1);

//     cout << "Sorted array: ";
//     printArray(array, size);

//     return 0;
// }