#include <iostream>
using namespace std;
int maxvalue(int arr[], int size)
{
    int temp = arr[0];
    for (int i = 0; i < size; i++)
    {
        if (temp < arr[i])
        {
            temp = arr[i];
        }
        cout << arr[i];
    }
    return 0;
}
int main()
{
    int arr[5] = {1, 4, 7, 4, 9};
    maxvalue(arr, 5);

    // int *arr=new int [3];
    // for(int i=0;i<3;i++){
    //     //offser operator
    //     *(arr+i)=i+1;
    //     //normally
    //     arr[i]=i+1;

    // }
    // delete [] arr;
    // nullptr arr;
}