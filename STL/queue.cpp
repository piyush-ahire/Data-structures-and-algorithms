#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<string> q;

    //puqhing elementq in the qtack
    q.push("Piyush"); //at end
    q.push("shlok");
    q.push("Mayur"); //at top

    cout<<"First elemenet is "<<q.front()<<endl;

    q.pop();
    cout<<"First elemenet is "<<q.front()<<endl;

    //size
    cout<<"Size after pop is "<<q.size()<<endl;


     

    

    return 0;
}