#include <iostream>
#include <math.h>
using namespace std;
#define pi 3.14
int main(){
    double radius;
    cout<<"Enter the radius of circle: ";
    cin>>radius;

    double perimeter = 2*pi*radius;
    double area = pi*pow(radius,2);

    cout<<endl<<"Perimeter is: "<<perimeter<<endl;
    cout<<"Area is: "<<area<<endl;
    return 0;
}