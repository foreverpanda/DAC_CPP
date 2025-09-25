#include<iostream>
#include<fstream>
#include<string>
using namespace std;


int main(){
    //Inseting data to a test.txt file
    ofstream out("test.txt");
    string str = "Hello bhai";
    out<<str;
    out.close();

    //reading data from a test file

    ifstream in("test.txt");
    string output;
    getline(in,output);
    // in >> output;
    cout<<output;
    
}