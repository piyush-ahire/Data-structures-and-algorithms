#include<iostream>
using namespace std;

//parent class
class human{

    public:
        int height;
        int weight;

        private: //access specifier
            int age;

        protected:
            int  salary;  //protected member can be accessed by derived classes also.

        public:
            int getAge(){
                return this->age;
            }

            void setWeight(int w){
                this->weight = w;
            }
};


//child class
class male: protected human{
    //it can access all properties of base class
    public:
        string color;

    void sleep(){
        cout<<"Male sleeping "<<endl;
         
    }

    int getHeight(){
        return this->height;
    }
    int getSalary(){
        return this->salary;
    }
};

int main(){

    //public - public
    male m1;
    cout<<m1.getHeight()<<endl;
    cout<<m1.getSalary()<<endl;












    // male obj1;
    
    // cout<<obj1.age<<endl;
    // cout<<obj1.weight<<endl;
    // cout<<obj1.height<<endl;

    // cout<<obj1.color<<endl;

    // obj1.setWeight(79);
    // cout<<obj1.weight<<endl;
    // obj1.sleep();

    return 0;
}
