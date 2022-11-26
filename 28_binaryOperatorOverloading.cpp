#include <iostream>
using namespace std;
class ComplexNumber{
    public:
        int real,img;
        ComplexNumber(){
            this->real = 0;
            this->img = 0;
        }
        ComplexNumber(int r,int i){
            this->real = r;
            this->img = i;
        }

        ComplexNumber operator+(ComplexNumber& obj){
            ComplexNumber result;
            result.real = this->real + obj.real;
            result.img = this->img + obj.img;
            return result;
        }
        void print(){
            cout<<real<<" + i"<<img<<endl;
        }
};
int main(){
    int r1,i1,r2,i2;
    cout<<"Enter real for first: ";
    cin>>r1;
    cout<<"Enter imaginary for first: ";
    cin>>i1;
    cout<<"Enter real for second: ";
    cin>>r2;
    cout<<"Enter imaginary for second: ";
    cin>>i2;

    ComplexNumber obj1(r1,i1),obj2(r2,i2),obj3;
    obj3 = obj1 + obj2;
    obj3.print();

    return 0;
}