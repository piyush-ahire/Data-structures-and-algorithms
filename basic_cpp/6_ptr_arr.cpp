#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4};

    cout<<arr<<endl;
    cout<<&arr<<endl;
    cout<<arr+1<<endl;
    cout<<endl;

    //pointer to 0th element of array
    int *p1 = arr;
    cout<<p1<<endl;
    cout<<*p1<<endl;

    p1++;
    cout<<*p1<<endl;

    //ptr to the entire arr
    int (*ptr)[10]; //ptr to an integer arr of 5 elements
    ptr = &arr;
    cout<<"pointer to array"<<endl;
    cout<<ptr<<endl;
    cout<<ptr+1<<endl; //loaction after the arr
    //int *ptr[5]; //an arr of pointers of size 5

   



    return 0;
}