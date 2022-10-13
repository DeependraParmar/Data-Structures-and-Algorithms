#include <iostream>
#include <limits.h>
using namespace std;
void fillArray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>a[i];
    }
}
void displayArray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
void maxAndSecMax(int a[],int n){
    int max = a[0];
    int secMax = INT_MIN;

    for(int i=1; i<n; i++){
        if(a[i]>max){
            secMax = max;
            max = a[i];
        }
        else if(a[i]<max && a[i]>secMax){
            secMax = a[i];
        }
    }
    cout<<endl<<"Largest element in the array is: "<<max<<endl;
    cout<<"Second Largest element of the array is: "<<secMax<<endl;
}
int main(){
    // Here in this problem, we are going to find the maximum and second maximum element of the array 
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *a = new int[n];

    cout<<"Fill the elements of the array....."<<endl;
    fillArray(a,n);
    cout<<"The Given input array looks like....."<<endl;
    displayArray(a,n);

    cout<<endl;
    maxAndSecMax(a,n);
    cout<<endl;



    return 0;
}