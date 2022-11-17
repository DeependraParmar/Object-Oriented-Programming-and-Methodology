#include <iostream>
using namespace std;
class Base{
    public:
    void printMessage(){
        cout<<"This is a base function..."<<endl;
    }
};
class Derived: public Base{
    public: 
        void printMessage(){
            //using scope resoultion operator to access
            // function of the base class 
            Base::printMessage();
            cout<<"This is a derived class..."<<endl;
        }
};
int main(){
    //creating the object of the derived class
    Derived d1;
    // using dot operator to call the function of the derived class 
    d1.printMessage();
    return 0;
}