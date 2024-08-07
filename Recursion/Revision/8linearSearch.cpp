#include<iostream>
using namespace std;

void print(int *arr, int n){
    cout<<"Size od arr is "<<n<<endl;

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int *arr, int size, int key){

    print(arr, size);

    //base case
    if(size == 0)
        return false;

    if(arr[0] == key){
        return true;
    }
    else{
        return linearSearch(arr+1, size-1, key);
    }
}

int main(){

    int arr[5] = {1,2,4,3,6};
    int size = 5;
    int key;
    cin>>key;

    bool ans = linearSearch(arr, size, key);

    if(ans){
        cout<<"Present "<<endl;
    }
    else{
        cout<<"Not present "<<endl;
    }

    return 0;
}