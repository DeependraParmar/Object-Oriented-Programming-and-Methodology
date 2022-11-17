#include <iostream>
using namespace std;
//using pointer in function and arrays
int returnSum(int *arr,int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    return sum;
}
int main(){
    int n = 6;
    int arr[] = {2,6,4,8,9,7};

    int sum = returnSum(arr,n);
    cout<<endl<<"Sum of all the elements of array is: "<<sum<<endl;
    cout<<endl;

    return 0;
}