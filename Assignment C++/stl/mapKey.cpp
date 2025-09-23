#include <iostream>
#include <map>
#include <string>
using namespace std;

class Account
{
    int actId;
    string name;
    public:
    Account(int actId, string name)
    {
        this->actId = actId;
        this->name = name;
    }
    string getName(){
        return name;
    }
};

int main()
{

    map<int,Account>accHolder;
    bool exit = false;
    while (!exit)
    {
        cout << "1. Add account 2. Display all 3. Search by accId, 4 Remove all\n";
        int choice;
        cin >> choice;
        cin.ignore();
        switch (choice)
        {
        case 1:
        {
            int actId;
            string name;
            cout<<"Enter id : ";
            cin>>actId;
            cin.ignore();
            cout<<"Enter name : ";
            getline(cin,name);
            Account newAcc = Account(actId,name);
            std::pair<int,Account>newPair(actId,newAcc);
            accHolder.insert(newPair);
            break;
        }
        case 2:{
            for(auto i : accHolder){
                cout<<i.first<<" "<<i.second.getName()<<endl;
            }
        }
        break;
        case 3:
        {
            int id;
            cout<<"Enter id : ";
            cin>>id;
            if(accHolder.find(id)!= accHolder.end()){
                cout<<"Found";
            }
            
            break;
        }
        case 4:{
            accHolder.clear();
        }
        default:
            break;
        }
    }
}