//To find the first and last occurance of the element in the array
//for first go in left arr
//for last go in right arr
//total occ = index of first + last - 1
#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            e = mid - 1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int lastOcc(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    int ans = -1;

    while(s<=e){
        if(arr[mid] == key){
            ans = mid;
            s = mid + 1;
        }
        else if(key>arr[mid]){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;
    }
    return ans;
}


int main(){
    int arr[9] = {1,2,3,4,4,4,4,5,6};
    int index1 = firstOcc(arr,9,4);
    cout<<"First occurance of 4 is index: "<<index1<<endl;

    int index2 = lastOcc(arr,9,4);
    cout<<"Last occurance of 4 is index: "<<index2<<endl;


    return 0;
}