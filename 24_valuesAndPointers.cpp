#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    int *ptr = &a;

    //using dereferencing operator to print value
    cout<<endl<<"Value of a is: "<<a<<endl;
    cout<<"Value at address stored by pointer is: "<<*ptr<<endl;   
    return 0;
}