#include<iostream>
using namespace std;
int main(){
     //pointer to some garbage address
     //bad practice
    //  int *p = 0;
    //  cout<<*p<<endl;

    // int i = 5;

    // int *p = 0;
    // p = &i;

    // cout<<p<<endl;
    // cout<<*p<<endl;


    int a = 4;
    int b = a;
    b++; 
    cout<<"a is "<<a<<endl; 
    //no change in a

    int *p = &a;
    cout<<"before "<<a<<endl;
    (*p)++;
    cout<<"after "<<a<<endl;
    cout<<endl;

    int *q = p;
    cout<<p<<" - "<<q<<endl;
    cout<<*p<<" - "<<*q<<endl;
    cout<<endl;

    //imp concept

    int i = 3;
    int *t = &i;

    *t= *t + 1;
    cout<<*t<<endl;

    cout<<"before "<<t<<endl;
    t = t + 1;
    cout<<"After "<<t<<endl;

    return 0;
}