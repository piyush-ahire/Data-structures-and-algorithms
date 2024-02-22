#include<iostream>
using namespace std;

int score = 15; //global var, can use anywhere in code but bad practice

//reference var not a copy
void a(int &i){

    cout<<score<<" in a "<<endl; 

    char ch = 'a'; //local var, valid for only this block
    cout<<i<<endl;
    //b(i);
}

void b(int &i){

    cout<<score<<" in b "<<endl;

    cout<<i<<endl;
}

int main(){

    int i = 5; //local var
    a(i);
    b(i);

    //local var
    // {
    //     int i = 2;
    //     cout<<i<<endl;
    // }

    cout<<i<<endl;

    return 0;
}
