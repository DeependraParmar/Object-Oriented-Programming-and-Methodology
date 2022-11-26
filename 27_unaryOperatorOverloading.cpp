#include <iostream>
using namespace std;
class Increment{
    public:
        int km,m;

        Increment(int kms,int ms){
            this->km = kms;
            this->m = ms;
        }
        void operator+(){
            km++;
            m+=100;
        }
        void print(){
            cout<<"Kilometers are: "<<km<<endl;
            cout<<"Meteres are: "<<m<<endl;
        }
};
int main(){
    Increment obj(45,340);
    +obj;
    obj.print();
    return 0;
}