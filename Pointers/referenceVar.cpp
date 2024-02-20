#include<iostream>
using namespace std;

void update(int n){
    n++;

}

void update1(int &n){
    n++;
}
int main(){

    int i = 5;
    //create a reference variable

    int &j = i;

    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    cout<<j<<endl;
    j++;
    cout<<i<<endl;
    cout<<endl;
    cout<<endl;
    cout<<endl;


    int n = 5;

    cout<<"Before: "<<n<<endl;
    update(n);
    cout<<"After: "<<n<<endl; //no change coz it pass by value
    cout<<endl;

    //call by reference
    cout<<"Before: "<<n<<endl;
    update1(n);
    cout<<"After: "<<n<<endl; //no change coz it pass by value


    



    return 0;
}
