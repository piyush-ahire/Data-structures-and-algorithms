#include<iostream>
using namespace std;
int main(){
    int arr[10] = {1,2,3,4};
    cout<<arr<<endl; //gives add of first loc
    cout<<endl;

    //char arr is not same as int arr 
    char ch[6] = "abcde";
    cout<<ch<<endl; //prints entire string
    cout<<endl;

    char *c = &ch[0];
    cout<<c<<endl;
    cout<<*c<<endl; //gives first element

    char temp = 'z';
    char *p =&temp;
    cout<<p<<endl; //prints till not getting the null character

    return 0;
}