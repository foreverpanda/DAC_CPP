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
    cout<<"Elements entered are : ";
    for(int i = 0 ; i< size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findMax(int *arr, int size){
    int max = -100;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}

int findMin(int *arr, int size){
    int min = 10000;
    for(int i = 0; i < size; i++)
    {
        if(arr[i] < min){
            min = arr[i];
        }
    }
    return min;
}

int main(){
    int size = 0 ;
    cin>>size;

    int *arr = new int[size];

    makeArray(arr,size);
    displayArray(arr,size);

    int min = findMin(arr,size);
    int max = findMax(arr,size);
    cout<<"\nMaximum element : "<<max;
    cout<<"\nMinimum element : "<<min;

    return 0;

}