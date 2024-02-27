#include<iostream>
using namespace std;

void print(int arr[], int n){
    cout<<"Size of arr is "<<n<<endl;

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int *arr, int size, int key){
    print(arr,size); //to check the recursion

    //base case
    if(size == 0)
        return  false;

    //recursive func
    if(arr[0] == key){
        return true;
    }
    else{
        bool remainingPart = linearSearch(arr+1, size-1, key);
        return remainingPart;
    }
}

int main(){

    int arr[5] = {3,4,7,6,9};
    int size = 5;
    int key = 7;
    bool ans = linearSearch(arr, size, key);

    if(ans){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Not present "<<endl;
    }



    return 0;
}
