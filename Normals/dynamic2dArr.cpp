#include<iostream>
using namespace std;

int **createArr(int r, int c){
    int **arr = new int *[r];

    //allocate memery for each row
    for(int i=0; i<r; i++){
        arr[i] = new int[c];
    }

    //initialise with increasing values

    int val = 0;
    for(int i = 0; i<r; i++){
        for(int j=0; j<c; j++){
            arr[i][j] = val;
            val++;
        }
    }
    return arr;
}

int main(){
    int r,c;
    cin>>r>>c;

    int **arr = createArr(r,c);

    for(int i=0; i<r; i++){
        for(int j=0;j<c;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


    return 0;
}
