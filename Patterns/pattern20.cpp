#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;

    int i=1;
    while(i<=n){
        //space
        int space=n-i;
        while(space){
            cout<<" ";
            space--;
        }
        //num
        int j=1;
        while(j<=i){
            cout<<j;
            j++;
        }
        //second triangle
        int k=i-1;
        while(k){
            cout<<k;
            k--;
        }

        cout<<endl;
        i++;
    }
    return 0;
}
/*
 1
  121
 12321
1234321

d
*/