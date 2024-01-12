#include<iostream>
#include<queue>
using namespace std;

int main(){
    //max heap
    priority_queue<int> maxi;

    //min heap
    priority_queue<int, vector<int>, greater<int> > mini;

    //maxi
    maxi.push(1);
    maxi.push(3);
    maxi.push(2);
    maxi.push(0);

    cout<<"Size of maxi is "<<maxi.size()<<endl;
    //to iterate
    int n1 = maxi.size();
    for(int i=0; i<n1; i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }
    cout<<endl;
    cout<<endl;


    //for mini
    mini.push(1);
    mini.push(3);
    mini.push(2);
    mini.push(0);

    cout<<"Size of mini is "<<mini.size()<<endl;
    //to iterate
    int n2= mini.size();
    cout<<"Is empty or not "<<mini.empty()<<endl; // not empty
    for(int i=0; i<n2; i++){
        cout<<mini.top()<<" "; 
        mini.pop();
    }
    cout<<endl;

    cout<<"Is empty or not "<<mini.empty()<<endl; //empty


    return 0;
}