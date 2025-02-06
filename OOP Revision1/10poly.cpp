#include<iostream>
using namespace std;

class A{
    public:
        void sayHello(){
            cout<<"Hello "<<endl;
        }

        void sayHello(string name){
            cout<<"Hello "<<name<<endl;
        }
        
};

class animal{
    public:
        void speak(){
            cout<<"Speaking "<<endl;
        }
};

class dog : public animal{
    public:
        void speak(){
            cout<<"Barking "<<endl;
        }
};

int main(){

    A obj;
    obj.sayHello();


    dog d;
    d.speak();

    return 0;
}