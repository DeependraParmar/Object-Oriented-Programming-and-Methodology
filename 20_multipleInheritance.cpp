#include <iostream>
using namespace std;
class Base1{
    public:
        Base1(){
            cout<<"Base1 class constructor..."<<endl;
        }
};
class Base2{
    public:
        Base2(){
            cout<<"Base2 class constructor..."<<endl;
        }
};
class Derived:public Base1,Base2{
    public:
        Derived(){
            cout<<"Derived class constructor..."<<endl;
        }
};
int main(){
    Derived dr1;
    return 0;
}