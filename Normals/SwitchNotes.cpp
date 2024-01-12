// Rs. 100, Rs.50, Rs.20, Rs. 1
#include<iostream>
using namespace std;
int main(){
    int amount;
    cout<<"Enter amount: ";
    cin>>amount;

    int Rs100, Rs50, Rs20, Rs1;

    switch(1){
        case 1 :Rs100 = amount/100;
                amount = amount - Rs100*100;
                cout<<"Total no of notes of 100 are: "<<Rs100<<endl;
                 

        case 2 :Rs50 = amount/50;
                amount = amount - Rs50*50;
                cout<<"Total no of notes of 50 are: "<<Rs50<<endl;
                 

        case 3 :Rs20 = amount/20;
                amount = amount - Rs20*20;
                cout<<"Total no of notes of 20 are: "<<Rs20<<endl;
                

        case 4 :Rs1 = amount/1;
                amount = amount - Rs1*1;
                cout<<"Total no of notes of 100 are: "<<Rs1<<endl;
                 
    }
    return 0;
} 