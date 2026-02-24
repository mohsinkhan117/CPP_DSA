#include <iostream>
using namespace std;
int *darray(int arr[], int size)
{
    int newsize = size * 2;
    int *newarr = new int[newsize];
    for (int i = 0; i < size; i++)
    {
        newarr[i] = arr[i];
        cout << newarr[i];
    }
    for (int i = size; i < newsize; i++)
        newarr[i] = -1;
    return newarr;
}
int main()
{
    int arr[5] = {1, 3, 4, 5, 6};
    int *ret = darray(arr, 5);
    delete[] ret;
}