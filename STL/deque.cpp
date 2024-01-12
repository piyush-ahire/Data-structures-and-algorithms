#include<iostream>
#include<deque>
using namespace std;
int main(){

    deque<int> d;

    //adding the elements
    d.push_back(1);
    d.push_front(2);

    //to pop elements
    //d.pop_front();
    
    cout<<"Element at 1st index is "<<d.at(1)<<endl;
    cout<<endl;

    cout<<"First element is "<<d.front()<<endl;
    cout<<"last element is "<<d.back()<<endl;
    cout<<"Deque is empty or not "<<d.empty()<<endl;

    cout<<endl;
    cout<<endl;

    //to erase elements
    cout<<"Before delete size "<<d.size()<<endl;
    d.erase(d.begin(), d.begin()+1); //deletes the first element

    cout<<"After delete size "<<d.size()<<endl;

    cout<<endl;
    //to iterate deque
    for(int i:d){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}