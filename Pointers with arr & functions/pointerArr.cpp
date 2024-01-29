#include<iostream>
using namespace std;
int main(){
    //to find add of first block in arr
    int arr[10] = {2,5,6,7};
    cout<<"Address of first block in arr is: "<<arr<<endl;
    cout<<"Address of first block in arr is: "<<&arr[0]<<endl;

    cout<<"Value at first loc "<<*arr<<endl;
    cout<<"Value at first+1 loc "<<*arr + 1<<endl;
    cout<<"Value at second loc "<<*(arr+1)<<endl;

    //same
    cout<<"Value at third loc "<<arr[2]<<endl;
    cout<<"Value at third loc "<<*(arr + 2)<<endl;

    //using index
    int i=3;
    cout<<i[arr]<<endl;
    cout<<endl;

    //ptr address
    int temp[10] = {1,2};
    cout<<sizeof(temp)<<endl;
    cout<<"size of val at 1st loc "<<sizeof(*temp)<<endl;
    cout<<"size of add at 2st loc "<<sizeof(&temp)<<endl;

    int *ptr = &temp[0];
    cout<<sizeof(*ptr)<<endl;

    cout<<sizeof(&ptr)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<endl;

    //arr
    int a[20] = {1,2,3,4};
    //all same
    cout<<&a[0]<<endl;
    cout<<&a<<endl;
    cout<<a<<endl;
    cout<<endl;

    int *p = &a[0];
    cout<<"Add of a[0] "<<p<<endl;
    cout<<"add of p itself "<<&p<<endl;
    cout<<endl;
     
    //symbol table updations

    int arr1[10];
    
    //arr1 = arr1 + 1;  not possible
    cout<<arr1<<endl;

    //we can modify it using the pointers

    int *p1 = &arr1[0];
    cout<<p1<<endl;
    p1 = p1 + 1;
    cout<<p1<<endl;


    return 0;
}