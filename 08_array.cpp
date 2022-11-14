#include <iostream>
using namespace std;

int main(){
    int arr[10];
    cout<<"Fill the elements of the array: ";
    //loop for filling elements in array
    
    for(int i=0; i<10; i++)
        cin>>arr[i];
    cout<<endl<<endl<<"Printing the array..."<<endl;
    
    //loop for printing the array
    for(int i=0; i<10; i++)
        cout<<arr[i]<<" ";

    return 0;
}