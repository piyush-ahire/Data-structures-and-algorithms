#include<iostream>
using namespace std;


int printArr(int arr[], int size){
    for(int i = 0; i<size; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

//To swap the alterrnate elements of the array
void swapAlternate(int arr[], int size){

    for(int i=0; i<size; i+=2){
        if(i+1<size){
            swap(arr[i],arr[i+1]);
        }
    }
}
int main(){
    int arr1[6] = {1,2,3,4,5,6};
    int arr2[7] = {1,2,3,4,5,6,7};
    

    swapAlternate(arr1,6);
    printArr(arr1, 6); 

    swapAlternate(arr2,7);
    printArr(arr2, 7); 
    return 0;
}