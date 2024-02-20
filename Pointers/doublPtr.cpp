#include<iostream>
using namespace std;

//double ptr

void update(int **p2){
    //p2 = p2+1;
    //chage occurs - no, updates in func only

    //*p2 = *p2+1;
    //change occurs - yes

    **p2 = **p2+1;
    //change occurs yes
}

int main(){

    int i = 5;
    int *p = &i;
    int **p2 = &p;

    cout<<"Printing p "<<p<<endl;
    cout<<"Address of p "<<&p<<endl;
    cout<<endl;

    cout<<*p2<<endl;
    cout<<endl;

    //returns same val
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;
    cout<<endl;

    //val of p
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    cout<<endl;

    cout<<"Before i "<<i<<endl;
    cout<<"Before p "<<p<<endl;
    cout<<"Before p2 "<<p2<<endl;

    update(p2);

    cout<<"After i "<<i<<endl;
    cout<<"After p "<<p<<endl;
    cout<<"After p2 "<<p2<<endl;



    return 0;
}
