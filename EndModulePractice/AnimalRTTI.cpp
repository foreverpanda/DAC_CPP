#include <iostream>
#include <string>
#include<vector>

using namespace std;

class Animal
{
    string name;

public:
    Animal(string name) : name(name) {}
    virtual void makeSound() = 0;
};
class Lion : public Animal
{
public:
    Lion(string name) : Animal(name) {};
    void makeSound()
    {
        cout << "Lion : Roar!!\n";
    }
    void hunt()
    {
        cout << "Lion hunts!!\n";
    }
};

class Elephant : public Animal
{
public:
    Elephant(string name) : Animal(name) {};
    void makeSound()
    {
        cout << "Elephant : Trumpet !!\n";
    }
    void sprayWater()
    {
        cout << "Elephant SprayWater!!\n";
    }
};

class Snake : public Animal
{
public:
    Snake(string name) : Animal(name) {};
    void makeSound()
    {
        cout << "Snake : Hiss!!\n";
    }
    void shedSkin()
    {
        cout << "Snake ShedSkinF!!\n";
    }
};

// int main()
// {
//     Animal *animals[10];
//     int counter = 0;
//     bool exit = false;
//     Lion *newLion = new Lion("Sheru");
//     Snake *newSnake = new Snake("Sanky");
//     Elephant *newElephant = new Elephant("Elepat");
//     animals[0] = newLion;
//     animals[1] = newSnake;
//     animals[2] = newElephant;

//     for (int i = 0; i <= 2; i++)
//     {
//         animals[i]->makeSound();
//         if (auto animal = dynamic_cast<Lion *>(animals[i]))
//         {
//             animal->hunt();
//         }
//         else if (auto animal = dynamic_cast<Snake *>(animals[i]))
//         {
//             animal->shedSkin();
//         }
//         else if (auto animal = dynamic_cast<Elephant *>(animals[i]))
//         {
//             animal->sprayWater();
//         }
//     }
// }


int main(){

    vector<Animal*> listOfAnimals;
    Lion *newLion1 = new Lion("Sheru1");
    listOfAnimals.push_back(newLion1);

    Snake *newSnake1 = new Snake("Naagu1");
    listOfAnimals.push_back(newSnake1);

    Lion *newLion2 = new Lion("Sheru2");
    listOfAnimals.push_back(newLion2);

    Snake *newSnake2 = new Snake("Naagu2");
    listOfAnimals.push_back(newSnake2);

    Lion *newLion3 = new Lion("Sheru3");
    listOfAnimals.push_back(newLion3);

    Elephant *newElephant1 = new Elephant("Sheru3");
    listOfAnimals.push_back(newElephant1);

    Elephant *newElephant2 = new Elephant("Sheru3");
    listOfAnimals.push_back(newElephant2);

    Elephant *newElephant3 = new Elephant("Sheru3");
    listOfAnimals.push_back(newElephant3);

    for(auto i : listOfAnimals){
        i->makeSound();
        if(typeid(*i) == typeid(Lion)){
            auto lion = dynamic_cast<Lion*>(i);
            lion->hunt();
        }
        else if(auto elephant = dynamic_cast<Elephant*> (i)){
            elephant->sprayWater();
        }
        else if(auto snake = dynamic_cast<Snake*>(i)){
            snake->shedSkin();
        }
    }



}

// while(!exit)
// {
//     cout<<"1. Create Animal\n2. Select animal\n3. Do function\n";
//     int choice;
//     cin>>choice;
//     switch (choice)
//     {
//     case 1:
//         cout<<"Create animal"
//     break;

//     default:
//         break;
//     }
// }
