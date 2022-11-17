#include <iostream>
using namespace std;
class Base{
    public:
        Base(){
            cout<<"Base class constructor..."<<endl;
        }
};
class Child:public Base{
    public:
        Child(){
            cout<<"Child class constructor..."<<endl;
        }
};
class SuperChild:public Child{
    public:
        SuperChild(){
            cout<<"SuperChild class constructor..."<<endl;
        }
};
int main(){
    SuperChild sc1;
    return 0;
}