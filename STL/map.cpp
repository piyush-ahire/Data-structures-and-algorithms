#include<iostream>
#include<map>
using namespace std;

int main(){
    map<int, string> m;
    m[1] = "Piyush";
    m[14] = "a";
    m[12] = "c";

    //t insert
    m.insert({5,"xyz"});
    cout<<"Before erase"<<endl;
    for(auto i:m){
        cout<<"For key "<<i.first<<" value is "<<i.second<<endl;
    }
    cout<<endl;
    cout<<endl;

    //count
    cout<<"Finding 14 : "<<m.count(14)<<endl;
    cout<<endl;

    //to erase
    m.erase(14);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<"For key "<<i.first<<" value is "<<i.second<<endl;
    }
    cout<<endl;
    cout<<endl;

    //find and return all elements present after it
    auto it = m.find(5);
    for(auto i=it; i!=m.end(); i++){
        cout<<(*i).first<<" ";
    }

    return 0;
}