#include <iostream>
#include <string>
using namespace std;
class Student{
    public:
    int schno;
    string name;
    float percentage;
    Student(int id,string n,float p){
        schno = id;
        name = n;
        percentage = p;
    }
    void printDetails(){
        cout<<endl<<"ID: "<<schno<<endl;
        cout<<"Name: "<<name<<endl;
        cout<<"Percentage: "<<percentage<<endl;
    }
};
int main(){
    Student s1(210056,"Deependra Parmar",91.4);
    s1.printDetails();
    
    return 0;
}