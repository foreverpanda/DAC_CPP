#include <iostream>
enum class Genre { FICTION, SCIENCE, HISTORY, TECHNOLOGY };
Genre inputToGenre(int choice){

    switch (choice){
        case 1 : return Genre::FICTION;
        case 2 : return Genre::HISTORY;
        case 3 : return Genre::SCIENCE;
        default : return Genre::TECHNOLOGY;
    }

}

std::string genreToString(Genre g){
    switch (g)
    {
    case Genre::FICTION : return "FICTION";
        break;
    case Genre::HISTORY : return "HISTORY"; break;
    case Genre::SCIENCE : return "SCIENCE"; break;
    case Genre::TECHNOLOGY : return "TECHNOLOGY"; break;
    

    default: return "Invalid Genre";
        break;
    }
}


class LibraryItem{
    int id;
    std::string title;
    public:
    LibraryItem(int id, std::string title){
        this->id= id;
        this->title = title;
    }
    int getId() {return id;}
    std::string getTitle(){return title;}
    virtual void displayInfo() = 0;
    virtual ~LibraryItem(){};
    
};

class Book :public LibraryItem{
    std::string author;
    Genre genre;
    public:
    Book(std::string author , Genre genre,int id, std::string title):LibraryItem(id,title){
        this->author = author;
        this->genre = genre;

    }

    void displayInfo(){
        std::cout << "Book ID: " << getId() 
             << " | Title: " << getTitle()
             << " | Author: " << author
             << " | Genre: " << genreToString(genre) << std::endl;
    }
    };


