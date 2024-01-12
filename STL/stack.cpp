#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<string> s;

    //pushing elements in the stack
    s.push("Piyush"); //at end
    s.push("Shlok");
    s.push("Mayur"); //at top

    cout<<"Element at top is "<<s.top()<<endl;

    //size
    cout<<"Size of stack is "<<s.size()<<endl;


    s.pop(); //removes top element
    cout<<"Element at top is "<<s.top()<<endl;

    //empty or not
    cout<<"Empty or not "<<s.empty()<<endl;

    return 0;
}