#include<iostream>
using namespace std;

class hero{

    //properties
    private:
        int health;

    public:
    
    int level;

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



    
     


};

int main(){
    //creation of obj
    hero ramesh;
    //cout<<"Size of : "<<sizeof(ramesh)<<endl;

    //cout<<ramesh.health<<endl;
    cout<<ramesh.level<<endl;

    //using getters and setters we can accses private data memebers
    ramesh.setHealth(7);
    cout<<ramesh.getHealth()<<endl;

    cout<<"Size of : "<<sizeof(ramesh)<<endl;


    return 0;
}