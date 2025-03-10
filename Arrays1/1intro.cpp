#include<iostream>
using namespace std;

char toLowerCase(char ch){
    if(ch >= 'a' && ch <= 'z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    } 
}


bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLowerCase(a[s]) != toLowerCase(a[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}


void swap(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getLength(char name[]){
    int count = 0;
    for(int i=0; name[i] != '\0'; i++){
        count++;
    }
    return count; 
}

int main(){
    char name[20];
    cout<<"Enter your name: "<<endl;
    cin>>name;

    cout<<"Your name is "<<name<<endl;
    int a = getLength(name);
    cout<<"length of the string is "<<a<<endl;
    swap(name,a);
    cout<<"Reverse of string is "<<name<<endl;

    cout<<"Palindrome or not "<<checkPalindrome(name, a)<<endl;
    return 0;
}