#include <iostream>
using namespace std;
int findMaximum(int a[],int n){
    int max = a[0];//assuming the first element of the array to be maximum 
    for(int i=1; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
int main(){
    // In this, we are going to solve a problem in which we are going to find the maximum of the array and print it using a return type function.
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
    int max = findMaximum(a,n);
    cout<<"Maximum element of the array is: "<<max<<endl;


    return 0;
}