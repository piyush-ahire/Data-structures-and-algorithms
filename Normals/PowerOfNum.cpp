//a^b format
#include<iostream>
using namespace std;
int pow(){
     int a,b;
     cin>>a>>b;

    int ans = 1;
    for(int i = 1; i<=b; i++){
        ans = ans*a;
    } 
    return ans;  
}

int main(){
   
    int c = pow();
    cout<<"Answer is: "<<c<<endl;
    return 0;
}