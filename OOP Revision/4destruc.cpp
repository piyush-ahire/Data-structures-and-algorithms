#include<iostream>
#include<cstring>
using namespace std;

class Hero{
    //properties
private:
   int health;

public:
    char *name;
    char level;
    static int timeToComplete;




    //constructor
    Hero(){
        cout<<"Simple Constructor called "<<endl;
        name = new char[100];
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


    //copy constructor
    Hero(Hero& temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;

        cout<<"Copy constructor called "<<endl;
        this->health = temp.health;
        this->level = temp.level;
    }










   void print(){
    cout<<endl;
    cout<<"Name: "<<this->name<<endl;
    cout<<"Health: "<<this->health<<endl;
    cout<<"Level: "<<this->level<<endl;
    cout<<endl;
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



    //setter for name
    void setName(char name[]){
        strcpy(this->name, name);
    }



    //static function
    //can access static member only

    static int random(){
        return timeToComplete;
    }




    //destructor
    ~Hero(){
        cout<<"destructor called "<<endl;
    }
     
};

int Hero :: timeToComplete = 5;

int main(){
     
    // Hero a; // for static allocation destructor called automatically


    // //dynamic
    // Hero *b = new Hero();
    // delete b;


    // cout<<Hero :: timeToComplete<<endl; // good way to access static member

    // Hero a;

    // cout<<Hero :: timeToComplete<<endl;

    // Hero b;
    // b.timeToComplete = 10;
    // cout<<a.timeToComplete<<endl;
    // cout<<b.timeToComplete<<endl;


    //func call
    cout<<Hero :: random() <<endl;






    return 0;
}