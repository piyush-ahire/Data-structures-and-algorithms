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



    //destructor
    ~hero(){
        cout<<"Destructor is called "<<endl;
    }
};

int main(){

    //static
    hero a;

    //dynamic
    hero *b = new hero();
















    // hero hero1;
    // hero1.setHealth(1);
    // hero1.setLevel('A');

    // char name[7] = {"Piyush"};
    // hero1.setName(name);

 
    // //use default copy constructor
    // hero hero2(hero1);
     

    // hero1.name[0] = 'A';
    // hero1.print();

    // cout<<endl;
    // hero2.print();

    // hero1 = hero2;

    // hero1.print();
    // hero2.print();





    // hero s(70, 'C');
    
    // s.print();

    // //copy constructor
    // hero r(s);
    // r.print();













    //obj created statically
    // cout<<"Hi"<<endl;
    // hero ramesh(10); //when obj created then hero cons automatically called
    // // cout<<"hello"<<endl;
    // //cout<<"Address of ramesh "<<&ramesh<<endl;
    // ramesh.getHealth();


    // ramesh.print();



    // //dynamically
    // hero *h = new hero(12); //when obj created then hero cons automatically called
    // h->print();
    
    // hero temp(22, 'B');
    // temp.print();


 

    // //static allocation - in stack
    // hero a;

    // a.setLevel('A');
    // a.setHealth(100);
    // cout<<"Level is "<<a.level<<endl;
    // cout<<"Health is "<<a.getHealth()<<endl;  //used getter coz health is private

    // //dynamic allocation - in heap
    // hero *b = new hero; 

    // cout<<"Level is "<<(*b).level<<endl; //dereference then function call
    // cout<<"Health is "<<(*b).getHealth()<<endl;  //used getter coz health is private

    // //one more method to write this
    // cout<<"Level is "<<b->level<<endl; //dereference then function call
    // cout<<"Health is "<<b->getHealth()<<endl;  //used getter coz health is private

 

    //obj of class

    // hero h1;
    // cout<<"Size of h1 is "<<sizeof(h1)<<endl;
    // //getter
    // cout<<"h1 health is "<<h1.getHealth()<<endl; //using getter we can access private specifier

    // //setter
    // h1.setHealth(60);
    // cout<<"h1 health is "<<h1.getHealth()<<endl; //using getter we can access private specifier

    // h1.health1 = 70;
    // h1.level     = 'A';

    // //cout<<"Size of h1 "<<sizeof(h1)<<endl; //if class has att size - 4 otherwise class is empty then size - 1

    // //access property of a class

    // cout<<"health1 is "<<h1.health1<<endl;
    // cout<<"level is "<<h1.level<<endl;

    
    return 0;
}
