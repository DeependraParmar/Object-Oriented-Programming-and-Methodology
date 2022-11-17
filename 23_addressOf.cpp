#include <iostream>
using namespace std;

int main(){
    int a;
    cout<<"Enter the value of a: ";
    cin>>a;

    // creating a pointer
    int *ptr = NULL;

    //storing address of a in pointer ptr
    ptr = &a;

    cout<<"Address stored by ptr is: "<<ptr<<endl;
    cout<<"Address of a is: "<<&a<<endl;
    
    return 0;
}