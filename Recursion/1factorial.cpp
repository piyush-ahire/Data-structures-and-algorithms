#include<iostream>
using namespace std;

int factorial(int n){
    //base case - is always mandatory , otherwise segmentation fault occurs
    if(n==0)
        return 1;

    //small problem
    //int small = factorial(n-1);

    //big problem
    //int big = n * small;

    return n * factorial(n-1);
}


int main(){

    int n;
    cin>>n;

    int ans = factorial(n);

    cout<<ans<<endl;

    return 0;
}

//TC - o(n);
