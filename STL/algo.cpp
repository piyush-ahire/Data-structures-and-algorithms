#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.push_back(4);

    //we can directly apply algorithms using algo library
    cout<<"Binary search for 4 is "<<binary_search(v.begin(), v.end(), 4)<<endl;

    //to return iterator index
    cout<<"lower bound is "<<lower_bound(v.begin(), v.end(), 4) - v.begin()<<endl;
    cout<<"upper bound is "<<upper_bound(v.begin(), v.end(), 4) - v.begin()<<endl;
    cout<<endl;


    //to find max
    int a = 3;
    int b = 4;

    cout<<"Max of a and b is "<<max(a,b)<<endl;

    //to swap
    swap(a,b);
    cout<<"a is "<<a<<endl;
    cout<<"b is "<<b<<endl;
    cout<<endl;

    //to reverse the string

    string s = "abcd";
    reverse(s.begin(), s.end());
    cout<<"Reverse of abcd is "<<s<<endl;
    cout<<endl;

    //rotate
    rotate(v.begin(), v.begin()+1, v.end());
    cout<<"After rotate "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<endl;

    //sort
    sort(v.begin(), v.end());
    cout<<"After sort "<<endl;
    for(int i:v){
        cout<<i<<" ";
    }

    
    return 0;
}