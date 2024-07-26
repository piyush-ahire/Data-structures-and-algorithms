#include<iostream>
using namespace std;



//compiletime 
class A{
    public:
        void sayHello(){
            cout<<"Hello love babbar "<<endl;
        }

        int sayHello(char name){
            cout<<"Hello love babbar "<<endl;
            return 1;
        }
 

        void sayHello(string name){
            cout<<"Hello "<<name<<endl;
        }
};


//operator overloading

class B{
    public:
        int a, b;

    public:
        int add(){
            return a+b;
        }

        void operator+ (B &obj){
            int val1 = this->a;
            int val2 = obj.a;

            cout<<"Output "<<val2 - val1<<endl;
        }
};

//runtime

class Animal{
    public:
        void speak(){
            cout<<"Speaking "<<endl;
        }
};

class Dog : public Animal{
    public:
        void speak(){
            cout<<"Barking "<<endl;
        }
};



int main(){
    // A obj;
    // obj.sayHello();



    //operator overloading
    // B obj1, obj2;
    // obj1.a = 4;
    // obj2.a = 7;

    // obj1 + obj2;








    //Runtime 
    Dog obj;
    obj.speak();


    return 0;
}