#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.14
double volume(double r){
    return 4/3*pi*pow(r,3);
}
double volume(double r,double h){
    return pi*pow(r,2)*h;
}
int main(){
    double r,h;
    cout<<"Enter the value of radius: ";
    cin>>r;
    cout<<"Enter the value of height: ";
    cin>>h;

    cout<<endl;
    cout<<"Volume of Sphere is: "<<volume(r)<<endl;
    cout<<"Volume of Cylinder is: "<<volume(r,h)<<endl;
    return 0;
}