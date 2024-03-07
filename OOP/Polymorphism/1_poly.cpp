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


int main(){

    A obj;
    obj.sayhello();
    obj.sayhello("piyush");
    obj.sayhello('p'); //char
    return 0;
}
