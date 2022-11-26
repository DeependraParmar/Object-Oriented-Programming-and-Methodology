#include <iostream>
using namespace std;
class Base{
    public:
        int num1,num2;
        Base(){
            num1 = 0;
            num2 = 0;
        }

        Base(int a,int b){
            this->num1 = a;
            this->num2 = b;
        }

        virtual int returnResult(){
            return num1+num2;
        }
};
class Derived: public Base{
    public: 
    Derived(int a,int b){
        this->num1 = a;
        this->num2 = b;
    }

    int returnResult(){
        return num1-num2;
    }

};
int main(){
/*   Virtual function is used to perform runtime polymorphism
        > in this, we define a function in base class and then we override its definition in derived class...
    */

   //creating the object of the base class
    Base base(45,34);
    //calling returnSum function for base class with different values..
    int resultBase = base.returnResult();


    // creating the object of derived class. 
    Derived derived(78,22);
    // calling returnSum function for derived class with its different values...
    int resultDerived = derived.returnResult();


    // printing the values for both the classes 
    cout<<"Base returns sum as: "<<resultBase<<endl;
    cout<<"Derived returns difference as: "<<resultDerived<<endl;

    return 0;
}