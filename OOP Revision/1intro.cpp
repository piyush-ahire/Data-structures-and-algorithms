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
    // Hero h1;  //static allocation

    // cout<<"Size of h1: "<<sizeof(h1)<<endl;

    // //h1.health = 70;
    // h1.level = 'A';

    // h1.setHealth(70);
    // //cout<<"Health is: "<<h1.health<<endl;
    // cout<<" h1 Health is: "<<h1.getHealth()<<endl;

 
    // cout<<"level is: "<<h1.level<<endl;


    //dynamic allocation
    Hero *h2 = new Hero;

    h2->setlevel('A');
    h2->setHealth(70);

    cout<<"level is: "<<(*h2).level<<endl;
    cout<<" h1 Health is: "<<(*h2).getHealth()<<endl;

    //alternative way
    cout<<"level is: "<<h2->level<<endl;
    cout<<" h1 Health is: "<<h2->getHealth()<<endl;


    return 0;
}