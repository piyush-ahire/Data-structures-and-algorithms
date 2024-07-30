#include<iostream>
using namespace std;

void reachHome(int src, int dest){
    //base case
    cout<<"Source "<<src<<" dest "<<dest<<endl;
    if(src == dest){
        cout<<"Reached home "<<endl;
        return ;
    }

    //recursive relation
    src++;
    reachHome(src, dest);
}

int main(){

    int src = 1;
    int dest = 10;

    cout<<endl;

    reachHome(src, dest);
    return 0;
}