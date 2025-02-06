#include<iostream>
using namespace std;

class A{
    public:
        void func(){
            cout<<"Inside A"<<endl;
        }
         
};

class B{
     public:
        void func(){
            cout<<"Inside B"<<endl;
        }
         
};

class C : public A, public B{
     
};

 

int main(){
    C obj;
    //obj.func();

    obj.A :: func();
   

     
     
    

    return 0;
} 