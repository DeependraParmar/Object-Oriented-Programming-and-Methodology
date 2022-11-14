#include <iostream>
#include <string>
using namespace std;

int main(){
    string name;
    cout<<"Enter your full name: ";
    getline(cin,name);

    cout<<endl<<"Length of name is: "<<name.length()<<endl;
    cout<<"Adding regards: "<<name.append(" is awesome..")<<endl;
    cout<<"Character at 0th index is: "<<name.at(0)<<endl;
    return 0;
}