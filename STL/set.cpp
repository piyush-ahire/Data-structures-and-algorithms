#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;

    //to insert
    s.insert(5);
    s.insert(5);
    s.insert(5);
    s.insert(1);
    s.insert(6);
    s.insert(6);
    s.insert(0);
    s.insert(0);
    s.insert(0);

    //to iterate
    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<endl;

    //to erase
    s.erase(s.begin()); //removes the first element
     
    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<endl;
    

    //to delete second elelmt
    set<int> :: iterator it = s.begin();
    it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<endl;
    }
    cout<<endl;
    cout<<endl;

    //to check element is present or not

    cout<<"1 is present or not: "<<s.count(1)<<endl;
    cout<<"5 is present or not: "<<s.count(5)<<endl;

    cout<<endl;

    //to find the iterator
    set<int> :: iterator itr = s.find(1);

    //starts from that value
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    

    return 0;
}