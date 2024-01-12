#include<iostream>
using namespace std;
int main(){
    int a,b;
    a=4;
    b=6;

    cout<<"a&b :"<<(a&b)<<endl;
    cout<<"a|b :"<<(a|b)<<endl;
    cout<<"~a :"<<~a<<endl;
    cout<<"a^b :"<<(a^b)<<endl;

    cout<<(17>>1)<<endl;
    cout<<(17>>2)<<endl;
    cout<<(5<<1)<<endl;
    cout<<(5<<2)<<endl;


    int i=7;
    cout<<++i<<endl;
    cout<<i++<<endl;
    cout<<i--<<endl;
    cout<<--i<<endl;



    return 0;
}