#include<iostream>
using namespace std;

//wave print
void waveprint(int arr[][100], int rows, int cols){

    //iterate every col
    for(int col = 0; col<cols; col++){
        if(col%2 == 0){
            for(int row=0; row<= rows-1; row++){
                cout<<arr[row][col]<<" ";
            }
        }
        else{
            for(int row=rows-1; row>=0; row--){
                cout<<arr[row][col]<<" ";
            }
        }
    }
    cout<<endl;
}
int main(){
    int arr[1000][100];

    int n,m;
    cin>>n>>m;

    //take input
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }


    //print arr
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    waveprint(arr,n,m);

    return 0;
}