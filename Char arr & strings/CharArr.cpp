#include<iostream>
using namespace std;
//To check max occurance of the number
char maxOcc(string s){
    int arr[26] = {0};

    for(int i=0; i<s.length(); i++){
        char ch = s[i];
        //lowercase
        int number = 0;
        number = ch - 'a';
        arr[number]++;
    }
    int maxi = -1, ans = 0;

    for(int i=0; i<26; i++){
        if(maxi<arr[i]){
            ans = i;
            maxi = arr[i];
        }
      
    }
    char fianlAns = 'a' + ans;
    return fianlAns;
}
//To lowercase

char toLowerCase(char ch){
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
//To check string is palindrome

bool checkPal(char arr[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        if(toLowerCase(arr[s])!=toLowerCase(arr[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

//To reverse chaR ARR
void reverse(char arr[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(arr[s++],arr[e--]);
    }
}

//length of char arr

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i]!='\0'; i++){
        count++;
    }
    return count;
}
int main(){
    // char name[20];
    // cout<<"Enter your name: ";
    // cin>>name;
    // //name[2] = '\0';

    // cout<<"Your name is "<<name<<endl;
    // int length = getLength(name);
    // cout<<"Length of the char arr is: "<<length<<endl;

    // reverse(name,length);
    // cout<<"Reverse of the char arr is: "<<name<<endl;

    
    // int palindrome = checkPal(name, length);

    // if(palindrome == 0){
    //     cout<<"The string is not a Palindrome."<<endl;
    // }
    // else{
    //     cout<<"The string is a Palindrome."<<endl;
    // }



    // cout<<"Character is: "<<toLowerCase('c')<<endl;
    // cout<<"Character is: "<<toLowerCase('F')<<endl;

    string s;
    cin>>s;
    cout<<maxOcc(s)<<endl;

    return 0;
}