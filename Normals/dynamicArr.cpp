#include<iostream>
using namespace std;
int main(){

    int n;
    cin>>n;

    //creating dynamic arr
    int *arr = new int[n];

    cout<<arr<<endl;
    for(int i=0; i<n; i++){
        arr[i] = i;
        cout<<arr[i]<<endl;
    }
    

    //to free up the memory delete the arr
    delete [] arr;

    cout<<arr<<endl;


    return 0;
}
