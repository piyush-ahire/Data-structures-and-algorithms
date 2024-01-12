#include<iostream>
using namespace std;

void printArr(int arr[], int size){
    cout<<"Printing the array"<<endl;

    for(int i=0; i<size; i++){
        cout<<arr[i]<<" ";
 
    }
    cout<<"Printing done"<<endl;

}
int main(){
    int number[15];
    
    cout<<"Value at 0 index is: "<<number[0]<<endl;

    //initialising an array
    int second[3] = {1,2,3};

    //accessing an array
    //cout<<"value at 2 index is: "<<second[2]<<endl;

    int third[15] = {2,7};
    int n = 3;

    //printArr(third, 15);


    int fourth[10] = {0};
    int a=10;
    //printArr(fourth, 10);

    //size of array
    int size = sizeof(fourth)/sizeof(int);
    //cout<<size<<endl;

    cout<<"Everything is fine"<<endl;
    return 0;
} 








 