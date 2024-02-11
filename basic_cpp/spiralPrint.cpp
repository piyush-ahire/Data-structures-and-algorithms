#include<iostream>
using namespace std;

void spiralPrint(int arr[][100], int n, int m) {
    //variables
    int startRow = 0;
    int endRow = n-1;
    int startCol = 0;
    int endCol = m-1;

    //outer loop traverse
    while (startCol<=endCol && startRow<=endRow)
    {
        //start row
        for(int col = startCol; col<=endCol; col++){
            cout<<arr[startRow][col]<<" ";
        }

        //end col
        for(int row=startRow+1; row<=endRow; row++){
            cout<<arr[row][endCol]<<" ";
        }

        //end row
        for(int col=endCol-1; col>=startCol; col--){
            //avoid duplicate printing of elements
            if(startRow==endRow){
                break;
            }
            cout<<arr[endRow][col]<<" ";
        }

        //start col
        for(int row=endRow-1; row>=startRow+1; row--){
            //avoid duplicate printing of elements
            if(startCol == endCol){
                break;
            }
            cout<<arr[row][startCol]<<" ";
        }

        //update var so that they point to the inner spiral
        startRow++;
        endRow--;
        startCol++;
        endCol--;

    }


    

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


    spiralPrint(arr,n,m);
    return 0;
}