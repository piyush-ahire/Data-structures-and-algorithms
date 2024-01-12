#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    
    while(i<=n){
        int j=1;
        char ch = 'A'+i+j-2;
        while(j<=n){
            cout<<ch;
            ch++;
            j++;
        }
        cout<<endl;
        i++;

    }
    return 0;
}
/*
ABCD
BCDE
CDEF
DEFG

1=i+j-1
A-1+1
A=i+j-2
*/