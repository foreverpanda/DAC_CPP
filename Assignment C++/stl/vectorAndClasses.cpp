// 2:Create an application for storing user information in vector.
//   (Hint:User class with data member userid,name,email,pwd)
//   Create Menu Driven app
//   1:add user
//   2:display all users
//   3:search user
//   4:change pwd
//   5:delete all

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class userData
{
    string name;

public:
    userData(string name)
    {
        this->name = name;
    }
    string getName()
    {
        return name;
    }
};

int main()
{
    vector<userData> listOfData;
    bool exit = false;
    while (!exit)
    {
        cout << "1. add 2. Display 3. search user 4. delete all 5. delete single user\n";
        int choice;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            string name;
            cin.ignore();
            getline(cin, name);
            userData newUser = userData(name);
            listOfData.push_back(newUser);
            break;
        }
        case 2:
        {
            for (auto i : listOfData)
            {
                cout << i.getName() << endl;
            }
            break;
        }
        case 3:
        {
            cout << "Enter user to search :";
            string user;
            cin.ignore();
            getline(cin, user);
            for (auto i : listOfData)
            {
                if (i.getName() == user){
                    cout<<"Found!\n";
                }
                
            }break;
        }
        case 4:{
            cout<<"Delete all users!";
            listOfData.clear();break;
        }
        case 5:{
            cout << "Enter user to search :";
            string user;
            cin.ignore();
          int it;
            getline(cin, user);
            for (int i = 0 ; i<listOfData.size() ; i++)
            {
                if (listOfData.at(i).getName() == user){
                    it = i;
                }   
                
            }
            listOfData.erase(listOfData.begin()+it);
            cout<<"Removed";break;
        }
        }
    }
}