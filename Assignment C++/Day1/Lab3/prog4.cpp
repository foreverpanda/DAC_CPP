#include<iostream>
using namespace std;

bool isPrime(int n){
    if(n == 1) return 0;
    if(n == 2) return 1;
    for(int i = 2 ; i<= n/2 ;i++){
        if(n%i == 0)
        return 0;
    }
    return 1;
}

int main(){
    int start = 0, end = 0;
    cout<<"Enter the starting range : ";
    cin>>start;
    cout<<"Enter ending range : ";
    cin>>end;
    cout<<"Prime numbers in the range "<<start<<" to "<<end<<endl;
    for(int i = start ; i<=end; i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
        
    }
    cout<<"\n";
}