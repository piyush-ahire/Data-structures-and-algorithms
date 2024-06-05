#include<iostream>
#include<stack>
using namespace std;
int main(){

    stack <int> s; //creation of the stack using STL

    //push operation
    s.push(2);
    s.push(3);

    //pop
    s.pop();

    cout<<"Printing top element "<<s.top()<<endl;

    //empty or not

    if(s.empty()){
        cout<<"Stack is empty "<<endl;
    }
    else{
        cout<<"Stack is not empty "<<endl;
    }

    cout<<"Size of stack is "<<s.size()<<endl;  //size of the stack

    

    return 0;
}
