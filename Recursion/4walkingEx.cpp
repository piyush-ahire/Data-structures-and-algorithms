#include<iostream>
using namespace std;

void reachHome(int src, int dest){

    cout<<"Source "<<src<<" destinaton "<<dest<<endl;
    //base case
    if(src == dest){
        cout<<"Reached home"<<endl;
        return ; //mandatory in base case
    }

    //processing one step next
    src++;

    //recursive relation
    reachHome(src, dest);

}

int main(){

    int dest = 10;
    int src = 1;

    cout<<endl;
    reachHome(src, dest);


    return 0;
}
