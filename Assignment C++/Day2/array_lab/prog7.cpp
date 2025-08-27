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

void bubbleSort(int *arr, int size){
    int counter;
    for(int i = 0 ; i<size-1;i++){
        for(int j = 0 ; j < size-1;j++){
            if(arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        // displayArray(arr,size);
    }
}


int main(){
    int size = 0 ;
    cout<<"Enter the size of array : ";
    cin>>size;

    int *arr = new int[size];

    makeArray(arr,size);
    displayArray(arr,size);
    bubbleSort(arr,size);
    cout<<"Sorted ";
    displayArray(arr,size);
}