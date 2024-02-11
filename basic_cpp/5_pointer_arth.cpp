#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4};

    cout<<arr<<endl; //add of the arr

    int *ptr = arr;
    for(int i=0;i<4;i++){
        cout<<ptr<<" data "<<*(ptr)<<endl;
        ptr=ptr+1;
    }
    cout<<endl;


    ptr = arr;
    for(int i=0;i<10;i++){
        cout<<*(ptr + i)<<endl;
    }
    return 0;
}