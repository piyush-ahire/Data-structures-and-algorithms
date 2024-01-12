#include<iostream>
using namespace std;

void reverse(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s],arr[e]);
        s++;
        e--;
    }
}

int print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int n;
    cin>>n;
    int arr[10];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Array is reverse order is: "<<endl;
    reverse(arr,4);
    print(arr,4);

    // for(int i=n-1; i>=0; i--){
    //     cout<<arr[i]<<" ";
    // }
 
    
    
    return 0;
}