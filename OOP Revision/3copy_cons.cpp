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
     
};

int main(){
     
    // Hero s(70, 'C');
    // s.print();

    // Hero r(s); //copy constructor
    // r.print();
    

    Hero hero1;
    hero1.setHealth(12);
    hero1.setlevel('D');
    
    char name[7] = "babbar";
    hero1.setName(name);

    hero1.print();

    //use default copy constructor - for it we have to remove our copy cons

    Hero hero2(hero1);

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();


    cout<<"By assigning copy assignment operator "<<endl;
    hero1 = hero2;
    
    hero1.print();

    hero2.print();

    return 0;
}