#include<iostream>
using namespace std;

void readLine(char *arr,int len,int delim){
    //terminates at '\n'
    int cnt = 0;
    char ch;

    while(true){
        ch = cin.get();
        arr[cnt] = ch;
        if(ch == len-1 || ch == delim){
            break;
        }
        cnt++;
    }
    //to terminate the arr
    arr[cnt] = '\0';
    cout<<cnt<<endl;

}
int main(){

    char arr[100];
    readLine(arr,20,'\n');

    cout<<arr<<endl;
    return 0;
}
