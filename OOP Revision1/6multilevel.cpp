#include<iostream>
using namespace std;

class animal{
    public:
        int age;
        int weight;

    public:
        void speak(){
            cout<<"Speaking "<<endl;
        }
};

class dog : public animal{
    
};

class germenSherphard : public dog{

};

int main(){

    germenSherphard g;
    g.speak();
    

    return 0;
}