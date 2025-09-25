#include <iostream>
#include <string>
#include <exception>
#include <vector>
using namespace std;

class BookNotAvailableException : public exception
{
    string msg;

public:
    BookNotAvailableException(string msg) : msg(msg) {}
    const char *what() const noexcept override
    {
        return msg.c_str();
    }
};

class Book
{
    int id;
    string title;
    string author;
    int copiesAvailable;

public:
    Book() {}
    void addBook(int id,
                 string title,
                 string author,
                 int copiesAvailable)
    {
        this->id = id;
        this->title = title;
        this->author = author;
        this->copiesAvailable = copiesAvailable;
    }

    int getAvailable(){
        return copiesAvailable;
    }
    void displayBooks()
    {
        cout << "Id : " << id << " | Title : " << title << " | Author : " << author << " | Copies Available : " << copiesAvailable << endl;
    }
    int getId(){return id;}
    void borrowBook(int id){
        if(copiesAvailable <=0){
            throw BookNotAvailableException("No copies available!!");
        }
        else{
            copiesAvailable--;
            cout<<"Borrowing!!\n";
            displayBooks();
        }
    }
};


int main(){
    vector<Book * > bookList;
    bool exit = false;
    while(!exit){
        try{
            cout<<"1. Add Book\n2. Display available\n3. Borrow Book\n";
        int choice;
        cin>>choice;
        switch(choice){
            case 1:{
                int id,copiesAvailable;
                string title,author;
                cout<<"Enter id :";
                cin>>id;
                cout<<"Enter title :";
                cin.ignore();
                getline(cin,title);
                cout<<"Enter author : ";
                getline(cin,author);
                cout<<"Enter number of copies :";
                cin>>copiesAvailable;
                Book * newBook =  new Book();
                newBook->addBook(id,title,author,copiesAvailable);
                bookList.push_back(newBook);
                break;
            }
            case 2:{
                for(auto i : bookList){
                    if(i->getAvailable() >0){
                        i->displayBooks();
                    }
                }
                break;
            }
            case 3:{int id;
                cout<<"Enter id : ";
                cin>>id;
                int found = false;
                for(auto i : bookList){
                    if(i->getId() == id){
                        i->borrowBook(id);
                        found = true;
                    }
                }
                if(!found){
                    throw out_of_range("Invalid id!\n");
                }
                break;
            }
        }
        }
        catch(out_of_range &e){
            cout<<e.what()<<endl;
        }
        catch(BookNotAvailableException & e){
            cout<<e.what()<<endl;
        }
    }
}