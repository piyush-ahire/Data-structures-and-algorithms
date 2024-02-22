#include<iostream>
using namespace std;
int main(){

    //create 2D arr
    // int n;
    // cin>>n;

    int row;
    cin>>row;

    int col;
    cin>>col;

    int **arr = new int *[row];

    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }
    //creation done

    //input in 2D arr

    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>arr[i][j];
        }
    }

    //output
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    //releasing the memory
    for(int i=0; i<row; i++){
        delete [] arr[i];
    }

    delete []arr;



    return 0;
}
