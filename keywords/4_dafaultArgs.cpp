#include<iostream>
using namespace std;

void print(int arr[], int n, int s = 0){            //default argument
    for(int i=s; i<n; i++){
        cout<<arr[i]<<endl;
    }
}

int main(){

    int arr[5] = {1,4,7,8,9};

    print(arr, 5);
    cout<<endl;
    print(arr, 5, 2);


    return 0;
}
