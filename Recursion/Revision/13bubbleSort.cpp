#include<iostream>
using namespace std;

int sortArr(int *arr, int n){

    //base case
    if(n == 0 || n == 1)
        return 1;

    for(int i=0; i<n-1; i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i], arr[i+1]);
        }
    }

    return sortArr(arr, n-1);

}

int main(){

    int arr[5] = {1,2,4,3,6};

    sortArr(arr, 5);

    for(int i=0; i<5; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}