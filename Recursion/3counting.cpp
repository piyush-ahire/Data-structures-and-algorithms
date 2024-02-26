#include<iostream>
using namespace std;

void printTail(int n){
    //base case
    if(n == 0){
        return ;
    }

    cout<<n<<endl;
    //call to next one & recursion relation
    printTail(n-1);
}

void printHead(int n){
    //base case
    if(n == 0){
        return ;
    }
 
    printHead(n-1);
    //call to next one & recursion relation
    cout<<n<<endl;
}

int main(){

    int n;
    cin>>n;

    printTail(n);
    cout<<endl;
    printHead(n);

    return 0;
}
