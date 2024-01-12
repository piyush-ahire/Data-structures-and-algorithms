#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=1;
    int row=1;
    while(row<=n){
        int col=1;
        while(col<=row){
            cout<<count<<" ";
            
            col=col+1;
            count=count+1;
        }
        cout<<endl;
        row=row+1;
        
    }
    /*
    1 
    2 3 
    4 5 6 
    7 8 9 10 
    */

    return 0;
}