#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){

    //base case
    if(size == 0 || size == 1)
        return true;

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        return isSorted(arr+1, size-1);  
    }
}

int main(){
    int arr[5] = {1,2,3,6,4};
    int size = 5;

    bool ans = isSorted(arr, size);
    
    if(ans){
        cout<<"The array is sorted"<<endl;
    }
    else{
        cout<<"The array is not sorted"<<endl;
    }
    return 0;
}