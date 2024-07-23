#include<iostream>
using namespace std;

class Hero{
    //properties
private:
   int health;

public:
   char level;



    //constructor
    Hero(){
        cout<<"Constructor called "<<endl;
    }

    //Parameterised constructor
    Hero(int health){
        cout<<"this-> "<<this<<endl;
        this->health = health;
    }

    Hero(int health, char level){
        this->level = level;
        this->health = health;
    }












   void print(){
    cout<<level<<endl;
   }


   //using getters and setters , we can access memebers of private modifiers
   int getHealth(){
    return health;
   }

   char getLevel(){
    return level;
   }



   void setHealth(int h){
    health = h;
   }

   void setlevel(char ch){
    level = ch;
   }

     
};

int main(){
    //object created statically
    //cout<<"Hi "<<endl;

    Hero h1(10);

    //cout<<"hello "<<endl;    
    //cout<<"Address of h1 is "<<&h1<<endl;
    h1.print();

    //Dynamically
    Hero *h = new Hero(11);
    h->print();

    Hero temp(22, 'B');
    temp.print();
    

    


    return 0;
}