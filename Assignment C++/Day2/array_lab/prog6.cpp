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

void countEvenOdd(int *arr, int size){
    int evenCount = 0 ;
    int oddCount = 0;
    for(int i = 0  ; i < size ; i++){
        if(arr[i] % 2){
            oddCount++;
        }
        else{
            evenCount++;
        }
    }
    cout<<"\n\nNumber of Even Numbers : "<<evenCount;
    cout<<"\n\nNumber of Odd Numbers : "<<oddCount;
    cout<<endl;


}


int main(){
    int size = 0 ;
    cout<<"Enter the size of array : ";
    cin>>size;

    int *arr = new int[size];

    makeArray(arr,size);
    displayArray(arr,size);
    countEvenOdd(arr,size);


}