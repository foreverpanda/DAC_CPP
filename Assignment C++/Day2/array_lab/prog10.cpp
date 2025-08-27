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

void mergeArray(int * finalArray ,  int finalSize, int *arr1, int size1, int *arr2, int size2){
    int indexArr =0;
    int indexFinal = 0;
    while(indexArr<size1)
        finalArray[indexFinal++] = arr1[indexArr++];
    
    indexArr  =0;
    while(indexArr<size2)
        finalArray[indexFinal++] = arr2[indexArr++];


}



int main(){
    int size1 = 0, size2 = 0;
    cout<<"Enter the size of first array : ";
    cin>>size1;

    cout<<"Enter the size of second Array : ";
    cin>>size2;
    int *arr1 = new int[size1];
    int *arr2 = new int[size2];
    int *mergedArray = new int[size1+size2];
    makeArray(arr1,size1);
    displayArray(arr1,size1);
    makeArray(arr2,size2);
    displayArray(arr2,size2);
    mergeArray(mergedArray,(size1+size2),arr1,size1,arr2,size2);
    displayArray(mergedArray,size1+size2);
    return 0;



}