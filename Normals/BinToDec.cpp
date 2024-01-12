#include<iostream>
#include<math.h>
using namespace std;
int i = 0;
int ans = 0;
int main(){
    int n;
    cin>>n;
    while(n!=0){
        int bit = n%10;
        if(bit==1){
            ans= ans + pow(2,i);

        }
        n=n/10;
        i++;
    }
    cout<<ans<<endl;
    return 0;
}