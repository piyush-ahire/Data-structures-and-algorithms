#include<iostream>
using namespace std;

class Human {
    protected:
        int height;
    public:
        
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

//inheritance

class Male : public Human{

    public:
        string color;
    
    void sleep(){
        cout<<"male sleeping "<<endl;
    }

    //for protected
    int getHeight(){
        return this->height;
    }
};

int main(){



    Male m1;
    //cout<<m1.getHeight()<<endl; //for protected



    //for private
    //cout<<m1.getHeight()<<endl;


    //for protected to public  and private to public
     
    
    // Male object1;
    // cout<<object1.age<<endl;
    // cout<<object1.weight<<endl;
    // cout<<object1.height<<endl;

    // cout<<object1.color<<endl;

    // object1.setWeight(85);
    // cout<<object1.weight<<endl;

    // object1.sleep();

    

    return 0;
}