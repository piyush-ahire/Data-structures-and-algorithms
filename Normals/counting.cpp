#include<iostream>
using namespace std;
void PrintCount(int n){
    for(int i=1; i<=n; i++){
        cout<<i<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    PrintCount(n);
    return 0;
}