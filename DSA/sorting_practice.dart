#include<iostream>
using namespace std;
void bubbleSort(int arr[],int size){
int temp;
for (int i=0;i<size;i++){
for(int j=0;j<size-1;j--){
  if(arr[i]>arr[i+j]){
    temp=arr[j];
    arr[j]=arr[j+1];
    arr[j+1]=arr;
  }
}
}
for(int i=0;i<size;i++)
{
  cout<<arr[i]<<" ";
}
}
int main(){
  int size=5;
int array[size]={2,3,1,8,6};
bubbleSort(array,size);
}