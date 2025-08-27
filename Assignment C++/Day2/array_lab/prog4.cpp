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

bool linearSearch(int *arr, int size, int key){
    for(int i = 0 ; i < size ; i++){
        if(arr[i] == key ) return 1;
    }
    return 0;
}
int main(){
    int size = 0 ;
    cout<<"Enter the size of array : ";
    cin>>size;

    int *arr = new int[size];

    makeArray(arr,size);
    displayArray(arr,size);

    int key = 0;
    cout<<"Enter the number to check : ";
    cin>>key;

    bool check = linearSearch(arr,size,key);
    if(check) cout<<"\nPresent\n";
    else cout<<"\nNot present\n";

}