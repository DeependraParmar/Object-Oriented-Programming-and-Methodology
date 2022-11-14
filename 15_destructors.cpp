#include <iostream>
using namespace std;
class printFibonacci{
    public:
        int n;
        
        //writing a constuctor for info and assignment
        printFibonacci(int a){
            cout<<"Object Created Successfully..."<<endl<<endl;
            n=a;
        }

        //printSeries function for printing the series
        void printSeries(){
            int a=0;
            int b=1;
            cout<<a<<" "<<b<<" ";
            for(int i=1; i<=n-2; i++){
                int c=a+b;
                cout<<c<<" ";
                a=b;
                b=c;
            }
            cout<<endl;
        }

        //destructor to vacant the memory from object after execution
        ~printFibonacci(){
            cout<<endl<<"Object Destroyed Successfully..."<<endl;
        }
};
int main(){
    int n;
    cout<<"Enter the terms to print in Fibonacci Series: ";
    cin>>n;

    //creating the object of the class
    printFibonacci f1(n);

    // calling the printSeries function 
    f1.printSeries();

    return 0;
}       