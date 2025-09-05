#include "LibraryItem.h"



int main(){
    int choice;
    std::cout<<"Select Genre (1-Fiction, 2-Science, 3-History, 4-Technology): ";
    std::cin >> choice;

    Genre g =inputToGenre(choice);

    Book b1("Author1",g,1,"Title1");
    b1.displayInfo();
}