#include<iostream>
using namespace std;

class Animal{
    public:
    int age;
    int weight;

    public:
        void speak(){
            cout<<"Speaking "<<endl;
        }
};

class Dog: public Animal{

};

class germenSherpherd: public Dog{

};

int main(){

    germenSherpherd g;
    g.speak();

    return 0;
}
 