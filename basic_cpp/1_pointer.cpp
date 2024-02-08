#include<iostream>
using namespace std;
int main(){
    int x = 10, y;
    cout<<&x<<endl;
    //cout<<&y<<endl;

    //demo pointer

    int *xptr = &x;
    cout<<xptr<<endl;
    //add of pointer var
    cout<<&xptr<<endl;

    //gives the bucket  in which x is stored.
    cout<<*xptr<<endl;

    // * - dereferance operator
    //ptr to a ptr
    int **xxptr = &xptr;
    cout<<xxptr<<endl;


    

    return 0;
}