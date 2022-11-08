#include <iostream>
using namespace std;
void fillArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]: ";
        cin>>arr[i];
    }
}
int calculateSum(int arr[],int n){
    int sum = 0;
    // base condition 
    if(n <= 0)
        return sum;
    
    return calculateSum(arr,n-1) + arr[n-1];
}
int main(){
    // Here we are going to calculate the sum of the elements of the given array and return it using recursion 
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    fillArray(arr,n);

    int sum = calculateSum(arr,n);
    cout<<"Sum is: "<<sum<<endl;
    return 0;
}