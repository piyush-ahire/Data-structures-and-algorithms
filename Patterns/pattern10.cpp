#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        int j=1;
        char start='A'+i-1;
        while(j<=n){
            cout<<start;
            j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}

/*
AAAA
BBBB
CCCC
DDDD
*/