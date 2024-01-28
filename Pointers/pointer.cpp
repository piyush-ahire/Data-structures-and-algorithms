#include<iostream>
using namespace std;
int main(){
    int num = 5;
    cout<<num<<endl;

    //address of operator - &

    cout<<"Address of  num is "<<&num<<endl;
    cout<<endl;

    //value of pointer 
    int *ptr = &num;
    cout<<"Address of num is: "<<ptr<<endl;
    cout<<"value stored in that address is: "<<*ptr<<endl;
    cout<<endl;

    //using another data type
    double d = 4.3;
    double *p2 = &d;
    cout<<"Address of d is: "<<p2<<endl;
    cout<<"value stored in that address is: "<<*p2<<endl;
    cout<<endl;

    cout<<"size of interger is: "<<sizeof(num)<<endl;
    cout<<"size of ptr is: "<<sizeof(ptr)<<endl;
    cout<<"size of *ptr is: "<<sizeof(*ptr)<<endl;

    return 0;
}