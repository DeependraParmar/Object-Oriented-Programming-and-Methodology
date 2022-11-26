#include <iostream>
#include <string.h>
using namespace std;
class Student{
    int schno;
    string name;

    public: 
        Student(int s,string name){
            this->schno = s;
            this->name = name;
        }

        friend void printDetails(Student& obj);
};
void printDetails(Student& obj){
    cout<<"Scholar Number is: "<<obj.schno<<endl;
    cout<<"Name of Student is: "<<obj.name<<endl;
}
int main(){
    Student std(056,"Deependra Parmar");
    printDetails(std);
    return 0;
}