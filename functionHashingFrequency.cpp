#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[15];
    int size;

    cout << "Enter Array size" << endl;
    cin >> size;

    cout << "Enter array elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "\n=== Building Hash Table ===\n";

    // Hash table (frequency array)
    // Initialize all values to 0
    int hash[100] = {0};

    // Fill hash table: key = value in arr[], value = frequency
    for (int i = 0; i < size; i++)
    {
        hash[arr[i]] += 1;
        cout << "Added element " << arr[i] << " --> hash[" << arr[i]
             << "] = " << hash[arr[i]] << endl;
    }

    cout << "\n=== Final Hash Table State (for elements in arr) ===\n";
    for (int i = 0; i < size; i++)
    {
        cout << "arr[" << i << "] = " << arr[i]
             << " --> frequency = hash[" << arr[i] << "] = " << hash[arr[i]] << endl;
    }

    cout << "\n=== Queries ===\n";
    int q;
    cin >> q; // number of queries

    while (q--)
    {
        int number;
        cin >> number; // query number
        cout << "Frequency of " << number << " = " << hash[number] << endl;
    }

    return 0;
}
