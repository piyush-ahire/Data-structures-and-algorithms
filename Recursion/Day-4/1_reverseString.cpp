#include<iostream>
#include<string.h>
using namespace std;

void reverse(string& str, int i, int j){
    //i-start point, j-end point
    
    cout<<"call received for "<<str<<endl;
    //base case
    if(i >= j) //imp case : when only one character is there in string
        return ;

    swap(str[i], str[j]);
    i++;
    j--;


    //recursive call
    reverse(str, i, j);

}


int main(){

    string name = "piyush";
    
    cout<<endl;
    reverse(name, 0, name.length() - 1);
    cout<<endl;

    cout<<"Reverse is "<<name<<endl;


    return 0;
}
