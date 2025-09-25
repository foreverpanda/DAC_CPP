#include<iostream>
using namespace std;

class Draw{
    public:
    virtual void drawPic(){
        cout<<"Drawing!";
    }
};

class Circle:public Draw{
    public:
    void drawPic(){
        cout<<"Drawing circle!!";
    }

};


int main(){
    
    // Draw *holder;
    Circle drawCircle =  Circle();
    Draw &holder = drawCircle;
    // holder = drawCircle;
    holder.drawPic();

}