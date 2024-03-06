#include<iostream>
#include <cstring>
using namespace std;

class hero{
    ///properties

    // char name[100];

 
    private:
    //char level; //only accessed inside the class coz private
    int health;
    

    public:
    char level;
    char *name;



    //static keyword
    static int time;




    //constructor
    hero(){
        cout<<"Simple Constructor called "<<endl;
        name = new char[100];
    }

    //Parameterised constructor
    hero(int health){
        cout<<"this-> "<<this<<endl; //stores the add of current obj    
        this->health = health;
    }

    hero(int health, char level){
        
        this->level = level;
        this->health = health;
    }

    

    //copy constructor
    hero (hero &temp){

        char *ch = new char[strlen(temp.name) + 1];
        strcpy(ch, temp.name);
        this->name = ch;


        cout<<"Copy constructor called "<<endl;
        this->health = temp.health;
        this->level - temp.level;
    }







    void print(){
        cout<<"Name "<<this->name<<endl;
        cout<<"Health is "<<this->health<<endl;
        cout<<"Level is "<<this->level<<endl;
    }

   

    //getters & setters
    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }


    void setHealth(int h){
        health = h;
    }

    void setLevel(char ch){
        level = ch;
    }


    void setName(char name[]){
        strcpy(this->name, name);
    }


    //static func
    static int random(){
        return time;
    }


    //destructor
    ~hero(){
        cout<<"Destructor is called "<<endl;    
    }
};


//initialisation of static member, outside of the class
int hero::time = 4;

int main(){

    cout<<hero::random()<<endl;











    // cout<<hero::time<<endl;

    // hero a;
    // cout<<a.time<<endl; // not reccomande coz static belongs to class not obj
    
    
    return 0;
}
