#include<iostream>
using namespace std;

int BinarySearch(int arr[], int n, int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }

        else if(key > arr[mid]){
            s = mid + 1;
        }

        else{
            e = mid - 1;
        }
        mid = s + (e-s)/2;

    }
    return -1;
}

int main(){
    int even[6] = {1,2,3,4,5,6};
    int odd[7] = {1,2,3,4,5,6,7};

    int eindex = BinarySearch(even,6,4);
    cout<<"Index of 4 is: "<<eindex<<endl;

    int oindex = BinarySearch(odd,7,4);
    cout<<"Index of 4 is: "<<oindex<<endl;



    return 0;
}