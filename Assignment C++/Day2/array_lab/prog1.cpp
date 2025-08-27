#include<iostream>
using namespace std;
int main(){
    int size = 0 ;
    cout<<"Enter the size of array : ";
    cin>>size;
    int *arr = new int[size];
    //Entering the elements
    for(int i = 0 ; i< size ; i++)
    {
        cout<<"Enter element : ";
        cin>>arr[i];
    }
    //Displaying the elements
    cout<<"Elements entered are : ";
    for(int i = 0 ; i< size;  i++){
        cout<<arr[i]<<" ";
    }

    return 0;

}