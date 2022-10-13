#include <iostream>
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
void reverseArray(int a[],int n){
    int start = 0; 
    int end = n-1;

    while(start<=end){
        swap(a[start++],a[end--]);
    }
}
int main(){
    // Here in this problem, we are going to reverse the original array 
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *a = new int[n];
    
    cout<<"Fill the elements in the array....."<<endl;
    fillArray(a,n);
    cout<<endl<<"The Given input array looks like....."<<endl;
    displayArray(a,n);
    cout<<endl;
    reverseArray(a,n);
    cout<<endl<<"Reverse of the array is: "<<endl;
    displayArray(a,n);
    cout<<endl;


    return 0;
}