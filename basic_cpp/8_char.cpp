#include<iostream>
using namespace std;
int main(){
    //ASCII - american standard code for information interchange
    //A - 65 , a - 97,  7-bit char set contains 128 chars
    char ch = 'A';
    char newLinechar  = '\n';
    //char ch = "A";  this will give an error coz chat stores in single quotes
    cout<<ch<<newLinechar<<endl;

    cout<<sizeof(char)<<endl;
    cout<<sizeof(ch)<<endl;

    //interprete char as int
    cout<<(int) ch<<endl;
    cout<<(int) newLinechar<<endl;

    cout<<"Print all the letters from A to Z"<<endl;
    for(int i=65; i<65 + 26; i++){
        cout<<i<<"-"<<(char) i<<" ";
    }

    cout<<endl;
    cout<<"Print all the letters from A to Z"<<endl;
    for(int i=0; i<=128; i++){
        cout<<i<<"-"<<(char) i<<endl;
    }

    return 0;
}