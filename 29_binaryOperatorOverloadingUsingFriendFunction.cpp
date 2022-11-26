#include <iostream>
using namespace std;
class Product{
    public:
        int num;
        Product(){
            this->num = 0;
        }
        Product(int n){
            this->num = n;
        }
        void print(){
            cout<<"Product is: "<<num<<endl;
        }

        friend Product operator*(Product& , Product&);
};
Product operator*(Product& obj1,Product& obj2){
    Product result;
    result = obj1.num * obj2.num;
    return result;
}
int main(){
    Product obj1(8),obj2(2),obj3;
    obj3 = obj1 * obj2;
    obj3.print();
    return 0;
}