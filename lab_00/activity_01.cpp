#include <iostream>
using namespace std;

float calculateAverage(int size, int arr[])
{

    float nomirator = 0.0;
    float average = 0.0;
    for (int i = 0; i < size; i++)
    {
        nomirator += arr[i];
    }
    average = nomirator / size;
    return average;
}

int main()
{
    int size;
    int arr[size];
    cout << "Enter Array size\n";
    cin >> size;
    cout << "Enter Array Elements\n";
    for (int i = 0; i < size; i++)
    {
        cout << "Enter " << i + 1 << " Element" << endl;
        cin >> arr[i];
    }
    cout << "\nAverage of the Array elements is " << calculateAverage(size, arr);
}