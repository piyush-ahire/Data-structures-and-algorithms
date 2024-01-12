#include<iostream>
using namespace std;

bool search(int arr[], int n, int key){
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;

}
int main(){
    int arr[10] = {1,2,3,4,5,6,7};

    int key;
    cout<<"Enter the key which you want to find: "<<endl;
    cin>>key;

    bool found = search(arr,10,key);
    if(found){
        cout<<"Element is present in the array"<<endl;
    }
    else{
        cout<<"Element is not present in the array"<<endl;
    }

    return 0;
}