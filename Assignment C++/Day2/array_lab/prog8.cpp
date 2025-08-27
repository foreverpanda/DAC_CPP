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

int findSecondMax(int * arr, int size){
    int max = -1;
    int secondMax = -1;
    for(int i = 0 ; i< size ; i++){
        if(arr[i] > max ){
            secondMax = max;
            max = arr[i];  
        }
        else if(arr[i] > secondMax && arr[i] < max){
            secondMax = arr[i];
        }
    }

    if(secondMax == -1){
        return arr[0];
    }

    return secondMax;

}


int main(){
    int size = 0 ;
    cout<<"Enter the size of array : ";
    cin>>size;

    int *arr = new int[size];

    makeArray(arr,size);
    displayArray(arr,size);
    int secondMax = findSecondMax(arr,size);
    cout<<"Second max element is : "<<secondMax<<endl;
   
}