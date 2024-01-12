#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        int val=row;
        while(col<=row){
            cout<<val<<" ";
            val+=1;
            col=col+1;
        }
        cout<<endl;
        row=row+1;
    }
    /*
    1 
    2 3 
    3 4 5 
    4 5 6 7 
    */

    return 0;
}