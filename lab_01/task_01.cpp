#include <iostream>
using namespace std;

float average(int arr[], int size)
{
    float sum = 0;
    float average = 0;
    for (int i = 0; i < size; i++)
    {
        sum += *(arr + i);
    }
    average = (float)sum / size;
    return average;
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

    cout << "Average of the Array elements is " << average(arr, size);
}