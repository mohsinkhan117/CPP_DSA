#include <iostream>
using namespace std;

int *mergeArray(int *arrA, int sizeA, int *arrB, int sizeB)
{
    int *merged = new int[sizeA + sizeB];

    for (int i = 0; i < sizeA; i++)
        *(merged + i) = *(arrA + i);

    for (int i = 0; i < sizeB; i++)
        *(merged + sizeA + i) = *(arrB + i);

    return merged;
}

int main()
{
    int sizeA;
    int arrA[sizeA];
    cout << "Enter Array A size: ";
    cin >> sizeA;
    cout << "Enter elements of arrayA: ";
    for (int i = 0; i < sizeA; i++)
    {
        cin >> *(arrA + i);
    }

    int sizeB;
    int arrB[sizeB];
    cout << "Enter ArrayB size: ";
    cin >> sizeB;
    cout << "Enter elements of arrayB: ";
    for (int i = 0; i <= sizeB; i++)
    {
        cin >> *(arrB + i);
    }

    int *result = mergeArray(arrA, sizeA, arrB, sizeB);

    for (int i = 0; i <= sizeA + sizeB; i++)
    {
        cout << result[i] << " ";
    }

    delete[] result;
    return 0;
}