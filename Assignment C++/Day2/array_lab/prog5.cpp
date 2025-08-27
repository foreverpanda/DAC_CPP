#include<iostream>
using namespace std;

void makeArray(int * arr, int size)
{
    for(int i = 0 ; i< size ; i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
    }
}


void displayArray(int * arr, int size)
{
    cout<<"Array is : ";
    for(int i = 0 ; i< size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void reverseArray(int *arr, int size){
    int index = 0;
    int end = size-1;
    while(index<=end){
        int temp = arr[index];
        arr[index] = arr[end];
        arr[end] = temp;
        index++;end--;
    }
}


int main(){
    int size = 0 ;
    cout<<"Enter the size of array : ";
    cin>>size;

    int *arr = new int[size];

    makeArray(arr,size);
    displayArray(arr,size);
    reverseArray(arr,size);
    cout<<"\n ::Reversing done::\n\n";
    displayArray(arr,size);


}