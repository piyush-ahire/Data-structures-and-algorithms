#include<iostream>
#include<vector>
using namespace std;

int main(){
    //Dynamic array
    vector<int> v; //creation of vector

    cout<<"Capacity is "<<v.capacity()<<endl; //current capacity to hold the elements 

    //to add element
    v.push_back(1);
    cout<<"Capacity is "<<v.capacity()<<endl; //dyanmically increases the size

    v.push_back(2);
    cout<<"Capacity is "<<v.capacity()<<endl; //dyanmically increases the size

    // for every new insertion if size is exceeding then it doubles its capacity now capacity =4
    v.push_back(3);
    cout<<"Capacity is "<<v.capacity()<<endl; //dyanmically increases the size
    cout<<"Size is "<<v.size()<<endl; 

    v.push_back(4);
    cout<<"Capacity is "<<v.capacity()<<endl; //dyanmically increases the size

    //capacity = 8
    v.push_back(5);
    cout<<"Capacity is "<<v.capacity()<<endl; //dyanmically increases the size
    cout<<endl;

    //other operations
    cout<<"Element at 2nd index is "<<v.at(2)<<endl;

    cout<<"First element is "<<v.front()<<endl;
    cout<<"Last element is "<<v.back()<<endl;

    cout<<endl;
    //to iterate vector
    cout<<"Before pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;


    v.pop_back(); //removes last element
    cout<<"After pop"<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;


    //to clear size not capacity
    cout<<"Capacity and size before clear "<<v.capacity()<<" and "<<v.size()<<endl;
    v.clear();
    cout<<"Capacity and size after clear "<<v.capacity()<<" and "<<v.size()<<endl;
    cout<<endl;

    //allocation
    vector<int> b(4,1);
    for(int i:b){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    //all elements are added of b are added in last
    vector<int> last(b);
    for(int i:last){
        cout<<i<<" ";
    }
    cout<<endl;


    return 0;
}