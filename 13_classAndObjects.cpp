#include <iostream>
#include <string>
using namespace std;
class Employee{
    public:
        int id;
        string name;
        string department;
        int salary;

        // function to take employee details 
        void getDetails(){
            cout<<endl<<endl<<"Enter your ID here: ";
            cin>>id;
            cout<<"Enter your Name here: ";
            cin>>name;
            cout<<"Enter your Department here: ";
            cin>>department;
            cout<<"Enter your Salary here: ";
            cin>>salary;
        }

        // function to print the details of employee 
        void printDetails(){
            cout<<endl<<endl;
            cout<<"Employee ID is: "<<id<<endl;
            cout<<"Employee Name is: "<<name<<endl;
            cout<<"Employee Department is: "<<department<<endl;
            cout<<"Employee Salary is: "<<salary<<endl;
        }
};
int main(){
    Employee e1;
    e1.getDetails();
    e1.printDetails();
    
    return 0;
}