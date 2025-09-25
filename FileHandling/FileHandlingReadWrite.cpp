#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
    fstream myFile;
    //variable of type fstream -> filestream
    //using myFile variable to open and read file.

    //opening the file

    // myFile.open("tempFile.txt",ios::app); //write
    // //revieves two paramenter name of the file to open and the mode in whci it shoudl be openeied
    // if(myFile.is_open()){
    //     myFile<<"Hello\n";
    //     myFile<<"This is second line\n";
    //     myFile.close();
    // }


    myFile.open("tempFile.txt", ios::in);

    if(myFile.is_open()){
        string chars;
        while(myFile>>chars){
            cout<<chars<<endl;

        }
    }
}