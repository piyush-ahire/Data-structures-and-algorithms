#include<iostream>
using namespace std;

void print(int *arr, int s, int e){
    cout<<endl;
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarySearch(int *arr, int s, int e, int k){

    print(arr, s, e);
    //base case
    if(s>e)
        return false;


    int mid = s + (e-s)/2;
    cout<<"Value of mid is "<<arr[mid]<<endl;

    if(arr[mid] == k)
        return true;

    if(arr[mid] < k){
        return binarySearch(arr, mid+1, e, k);
    }
    else{
        return binarySearch(arr, s, mid-1, k);
    }
}


int main(){

    int arr[5] = {1,2,4,3,6};
    int size = 5;
    int key;
    cin>>key;
     

    cout<<"Present or not "<<binarySearch(arr, 0, 4, key);

     

    return 0;
}