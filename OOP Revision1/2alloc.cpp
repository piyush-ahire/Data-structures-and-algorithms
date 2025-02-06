#include<iostream>
#include<cstring>
using namespace std;

class hero{

    //properties
    private:
        int health;

    public: 
    char level;
    char *name;

    //default cons
     hero(){
        cout<<"Default cons "<<endl;
        name = new char[100];
     }
    //parameterised
    hero(int health){   
        this->health = health;   
    }

    hero(int health, char level){
        this->level = level;
        this->health = health;
    }


    //copy cons
    hero(hero& temp){
        this->level = temp.level;
        this->health = temp.health;
    }

    void print(){
        cout<<"Name "<<this->name<<endl;
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
    }

    //getters
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
        strcpy(this->name,name);

    }

    
     


};

int main(){
    /* 
    //static allocation
    hero a;

    cout<<"level "<<a.level<<endl;
    cout<<"health "<<a.getHealth()<<endl;


    //dynamic allocation
    hero *b = new hero;
    b->setLevel('A');
    b->setHealth(70);

    cout<<"level "<<(*b).level<<endl;
    cout<<"health "<<(*b).getHealth()<<endl;

    cout<<"level "<<b->level<<endl;
    cout<<"health "<<b->getHealth()<<endl;
    */

//    cout<<"Hi"<<endl;


//    hero ramesh(70);
//    cout<<"add of ramesh "<<&ramesh<<endl;

//    cout<<"hello"<<endl;

    // hero *h = new hero(11);

    // hero temp(22, 'B');
    // temp.print();



    //copy const

    // hero S(70, 'C');
    // S.print();

    // hero R(S);
    // R.print();

    
    hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('A');

    char name[7] = "hello";
    hero1.setName(name);

    hero1.print();








    

    return 0;
}