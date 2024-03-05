#include<iostream>
using namespace std;

bool isSorted(int *arr, int size){

    //base case
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0]>arr[1]){
        return false;
    }
    else{
        bool remainingPart = isSorted(arr+1, size-1);
        return remainingPart;
    }

}


void print(int arr[], int s, int e){
    for(int i=s; i<=e; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


//binary search
bool binarySearch(int *arr, int s, int e, int key){
    cout<<endl;
    print(arr, s, e);
    //base case

    //element not found
    if(s>e)
        return -1;


    int mid = s + (e-s)/2;
    cout<<"Value of mid is "<<arr[mid]<<endl;
    //element found
    if(arr[mid] == key)
        return true;
    
 

    if(arr[mid]<key){
        return binarySearch(arr, mid+1, e,  key);
    }
    else{
        return binarySearch(arr, s, mid+1, key);
    }
}


int main(){

    int arr[6] = {2,4,6,8,9,18};
    int size = 6;
    int key = 18;
     
    cout<<"Present or not "<<binarySearch(arr,0,size-1,key)<<endl;

 
    // bool ans = isSorted(arr,size);

    // if(ans){
    //     cout<<"Arr is sorted"<<endl;
    // }
    // else{
    //     cout<<"Arr is not sorted"<<endl;
    // }



    return 0;
}

//TC - 