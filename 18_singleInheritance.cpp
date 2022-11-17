#include <iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"This is a default constructor of Base class..."<<endl;
        }
};
class Derived: public Base{
    public:
        Derived(){
            cout<<"This is a default constructor of Derived class..."<<endl;
        }
};
int main(){
    Derived d1;
    return 0;
}