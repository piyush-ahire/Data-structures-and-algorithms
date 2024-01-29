#include<iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;
    cout<<*p<<endl;
}

void update(int *p){
    p = p+1;
    cout<<"In the func "<<p<<endl;

    //to update outside func
    *p = *p + 1;
}

int getSum(int *arr, int n){
    cout<<"size of arr is by pointer "<<sizeof(arr)<<endl;
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int val = 5;
    int *p = &val;

    print(p);
    cout<<"Before update "<<p<<endl;
    update(p);
    cout<<"After update "<<p<<endl; //not incremented, updates only in that function
    cout<<endl;

    int arr[6] = {1,2,3,4,5,6};
    cout<<"sum is "<<getSum(arr,5)<<endl;
    cout<<"sum is "<<getSum(arr+3,3)<<endl;
    return 0;
}