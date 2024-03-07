#include<iostream>
using namespace std;

class A{

    public:

    //Function overloading
        void sayhello(){
            cout<<"hello "<<endl;
        }

        void sayhello(string name){
            cout<<"hello "<<name<<endl;
        }

        void sayhello(char name){
            cout<<"hello "<<name<<endl;
        }
};

class B{
    public:
        int a;
        int b;

    public:
        int add(){
            return a+b;
        }


        //operator overloading

        void operator+ (B &obj){
            int val1 = this->a;  //it will fetch a val
            int val2 = obj.a; //it will fetch  obj's a value

            cout<<"Output "<<val2-val1<<endl;
        }

        //overload - ()

        void operator() (){
            cout<<"I'm a bracket "<<this->a<<endl;
        }
};


int main(){

    B obj1, obj2;

    obj1.a = 4;
    obj2.a = 7;

    obj1 + obj2; 

    cout<<endl;
    obj1();


   
    return 0;
}
