#include<iostream>
#include <cstring>
using namespace std;
int main(){

    char name[] {"piyush"};

    //another way
    char company[] = "Coding minutes1";
    char intern_name[] = {'X', 'Y', 'Z','\0'}; //otherwise it will considere some garbage val as the null value


    //using cout , it will found null at zero inedx 
    cout<<name<<endl;
    cout<<intern_name<<endl;

    //length of the arr, strlen does not count the null character
    cout<<strlen(name)<<endl;
    cout<<company<<endl;
    cout<<strlen(company)<<endl;
    cout<<endl;
    cout<<intern_name<<endl;
    cout<<strlen(intern_name)<<endl;

    cout<<endl;

    //taking input for char arr
    char greeting[100];
    cin.getline(greeting,99, '.'); //use it if want a word with spaces to be print, third para is deleiminator to stop process the input
    cout<<greeting<<endl;


    return 0;
}
