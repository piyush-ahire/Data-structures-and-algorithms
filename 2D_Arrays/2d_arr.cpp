#include<iostream>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
     for(int row=0; row<3; row++){
        for(int col=0; col<4; col++){

           if(arr[row][col] == target){
            return 1;
           }
           
        }
         
    }  
    return 0;
}

//to print row-wise sum
void printSum(int arr[][4], int row, int col){
    cout<<"printing row wise sum:"<<endl;
     for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<4; col++){
            sum+=arr[row][col];
           
           }
           cout<<sum<<" ";
           
        }
         
    }

//to print sum col wise
 
void printSum1(int arr[][4], int row, int col){
    cout<<"printing col wise sum:"<<endl;
     for(int col=0; col<4; col++){
        int sum=0;
        for(int row=0; row<3; row++){
            sum+=arr[row][col];
           
           }
           cout<<sum<<" ";
           
        }
         
    }
 
//to find largest row sum
int largestSum(int arr[][4],int row, int col){
    int maxi = INT_MIN;
    int rowIndex = -1;  
    for(int row=0; row<3; row++){
        int sum=0;
        for(int col=0; col<4; col++){
            sum+=arr[row][col];
           
           }
        
        if(sum > maxi){
            maxi = sum;
            rowIndex = row;
        }
           
        }
        cout<<"the max sum is"<<maxi<<endl;
        return rowIndex;
         
    }
 
int main() {
    //create 2D arr
    int arr[3][4];

    //input row wise
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }

     //input row wise
    // for(int i=0; i<4; i++){
    //     for(int j=0; j<3; j++){
    //         cin>>arr[j][i];
    //     }
    // }

    //print
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }    


    //Search
    // cout<<"Enter the element to search "<<endl;
    // int target;
    // cin>>target;

    // if(isPresent(arr, target, 3, 4)){
    //     cout<<"Element found "<<endl;
    // }
    // else{
    //     cout<<"Not found"<<endl;
    // }
    
    printSum(arr, 3, 4);
    cout<<endl;
    
    printSum1(arr,3,4);

    largestSum(arr,3,4);
    

    return 0;                
}