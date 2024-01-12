#include<iostream>
#include<array>

using namespace std;
int main(){
    //normal arr
    int basic[3] = {1,2,3};

    //stl arr
    array<int, 4> a = {1,2,3,4};
    int size = a.size();
     
    for(int i=0; i<size; i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

    cout<<size<<endl;

    // all operations in o(1) time complexity
    cout<<"Element at index 2 is "<<a.at(2)<<endl;
    cout<<"Arr is empty or not "<<a.empty()<<endl;

    cout<<"First element is "<<a.front()<<endl;
    cout<<"Last element is "<<a.back()<<endl;
    return 0;
}