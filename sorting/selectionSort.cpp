#include<iostream>
using namespace std;

int selectionSort(int arr[], int n)
{   
    // Write your code here.
    for(int i=0; i<n-1; i++){
        int minIndex = i;

        for(int j=i+1; j<n; j++){
            if(arr[j]<arr[minIndex]){
                minIndex = j;
            }

        }
        swap(arr[minIndex], arr[i]);
    }
}
int main(){

    int arr[4] = {4,3,6,1};

    int sort = selectionSort(arr,4);
    cout<<"Sorted arr is "<<sort<<endl;
    

    return 0;
}