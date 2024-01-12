#include<iostream>
using namespace std;

int fun(int *arr, int n){
    int ans = 0;
    for(int i=0; i<n; i++){
        ans  = ans^arr[i];
    }
    return ans;
}
int main(){
    int arr[7] = {1,2,1,2,1,2,4};
    fun(arr,7);
    return 0;
}