#include<iostream>
#include<list>
using namespace std;

int main(){
    list<int> l;

    l.push_back(1);
    l.push_front(2);

    // l.pop_front();
    // l.pop_back();

    for(int i:l){
        cout<<i<<" ";
    }
    cout<<endl;

    //to erase
    l.erase(l.begin());
    cout<<"After erase "<<endl;
    for(int i:l){
        cout<<i<<"";
    }
    cout<<endl;

    cout<<"Size of list is: "<<l.size()<<endl;


    //to copy the previous list
    list<int> n(l);
    cout<<"After copy "<<endl;
    for(int i:n){
        cout<<i<<"";
    }
    cout<<endl;

    //also can initialise
    list<int>m(5,100);
    cout<<"After initialise "<<endl;
    for(int i:m){
        cout<<i<<" ";
    }
    cout<<endl;
    return 0;
}