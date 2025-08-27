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




int main(){
   //do it


}