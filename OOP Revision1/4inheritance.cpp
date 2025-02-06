#include<iostream>
using namespace std;

class human{
    public:
        int height;
        int weight;
        int age;

    public:
        int getAge(){
            return this->age;
        }

        void setWeight(int w){
            this->weight = w;
            
        }
};

//child class

class male : public human{
    public:
        string colour;

    void sleep(){
        cout<<"Male sleeping"<<endl;
    }
};

int main(){

    male obj1;
    cout<<obj1.age<<endl;
    cout<<obj1.colour<<endl;
    obj1.sleep();

    return 0;
}