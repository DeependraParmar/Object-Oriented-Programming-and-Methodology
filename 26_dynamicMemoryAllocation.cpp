#include <iostream>
using namespace std;
void fillArray(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
    }
}
void displayArray(int *arr,int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    cout<<"Fill the array..."<<endl;
    fillArray(arr,n);

    cout<<endl<<"Displaying the array..."<<endl;
    displayArray(arr,n);

    // deallocating the dynamic memory from heap 
    delete[] arr;
    cout<<endl;
    cout<<endl<<"Memory deallocated successfully..."<<endl;
    cout<<endl;
    return 0;
}