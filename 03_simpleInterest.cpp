#include <iostream>
using namespace std;

int main(){
    int p,t;
    double r;

    cout<<"Enter the principle amount: ";
    cin>>p;
    cout<<"Enter the rate: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;

    double si = (p*r*t)/100;
    cout<<endl;
    cout<<"Simple Interest is: "<<si<<endl;
    return 0;
}