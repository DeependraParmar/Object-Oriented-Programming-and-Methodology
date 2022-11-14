#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
        int id;
        string name;

    void setData(){
        cout<<"Enter student's ID: ";
        cin>>id;
        cout<<"Enter student's Name: ";
        cin>>name;
    }
    void getData(){
        cout<<"ID: "<<id<<endl;
        cout<<"Name: "<<name<<endl<<endl;
    }
};
int main(){
    Student s[30];
    cout<<"Total storage available for entry: 30"<<endl;
    int n;
    cout<<"Enter entries to fill: ";
    cin>>n;
    cout<<endl;

    //loop for taking the data from user
    for(int i=0; i<n; i++){
        cout<<"Fill Details of student: "<<i+1<<endl;
        s[i].setData();
        cout<<endl;
    }
    cout<<endl<<endl;
    // loop for printing the data 
    for(int i=0; i<n; i++){
        s[i].getData();
        cout<<endl;
    }

    return 0;
}