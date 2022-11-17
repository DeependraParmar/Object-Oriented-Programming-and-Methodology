#include <iostream>
using namespace std;
class A{
    public:
        A(){
            cout<<"A class constructor..."<<endl;
        }
};
class B:public A{
    public:
        B(){
            cout<<"B class constructor..."<<endl;
        }
};
class C:public A{
    public:
        C(){
            cout<<"C class constructor..."<<endl;
        }
};

int main(){
    B b1;
    C c1;
    return 0;
}