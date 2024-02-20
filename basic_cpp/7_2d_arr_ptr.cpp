#include<iostream>
using namespace std;

void accept2DArr(int (*ptr)[4]){
    cout<<"Add of row 0 "<<ptr<<endl;
    cout<<"Add of row 1 "<<ptr + 1<<endl;
}


void accept2DArr2(int arr[][4]){
    cout<<"Add of row 0 "<<arr<<endl;
    cout<<"Add of row 1 "<<arr + 1<<endl;
}
int main(){
    int arr[3][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    cout<<arr<<endl;
    cout<<"Add of 0,0 element "<<&arr[0][0]<<endl;
    cout<<"Add of 0,1 element "<<&arr[0][1]<<endl;
    cout<<"Arr+1 "<<arr + 1<<endl; //row ptr
    cout<<"Add of 1,0 element "<<&arr[1][0]<<endl;

    //arr name acts as a row pointer
    accept2DArr(arr);
    cout<<endl;
    accept2DArr2(arr);

    return 0;
}