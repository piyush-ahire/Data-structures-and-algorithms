#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout<<"I'm A "<<endl;
        }
};

class B{
    public:
        void func(){
            cout<<"I'm B "<<endl;
        }

};

class c : public A, public B{

};

int main(){

    c obj;
    //obj.func();  //ambiguity

    obj.A :: func();
    obj.B :: func();

    return 0;
}