#include <iostream>
using namespace std;
void printLarger(int a,int b){
    if(a>b)
        cout<<"a is greater..."<<endl;
    else    
        cout<<"b is greater..."<<endl;
}
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;

    printLarger(a,b);
    
    return 0;
}