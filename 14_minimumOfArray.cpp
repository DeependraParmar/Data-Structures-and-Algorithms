#include <iostream>
using namespace std;
int findMinimum(int a[],int n){
    int min = a[0];//assuming the first element of the array to be minimum 
    for(int i=1; i<n; i++){
        if(min>a[i]){
            min = a[i];
        }
    }
    return min;
}
int main(){
    // In this, we are going to solve a problem in which we are going to find the minimum of the array and print it using a return type function.
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *a = new int[n];

    // loop to fill elements 
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }

    cout<<endl;
    int min = findMinimum(a,n);
    cout<<"Minimum element of the array is: "<<min<<endl;


    return 0;
}