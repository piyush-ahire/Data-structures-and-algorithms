#include<iostream>
using namespace std;

class hero{
    ///properties

    // char name[100];

 
    private:
    //char level; //only accessed inside the class coz private
    int health;



    public:
    int health1;
    char level;

    
    void print(){
        cout<<"Level is "<<level<<endl;
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

};

int main(){















    

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
