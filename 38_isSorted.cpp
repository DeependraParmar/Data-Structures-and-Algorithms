#include <iostream>
using namespace std;
bool isSorted(int arr[], int size){
    // base case??
    if( size == 0 || size == 1){
        return true;
    }

    if(arr[0]>arr[1])
        return false;
    else{
        int recurr = isSorted(arr+1,size-1);
        return recurr;
    }
}
int main(){
    // In this, we are going to check whether the given array is sorted or not using recursion 
    int arr1[] = {1,2,3,4,5,6,7,8,9};
    int arr2[] = {9,8,7,6,5,4,3,2,1};
    int size = 9;

    int ans1 = isSorted(arr1,size);
    int ans2 = isSorted(arr2,size);

    // check for first array 
    if(ans1)
        cout<<"Array1 is sorted..."<<endl;
    else    
        cout<<"Array1 is not sorted"<<endl;


    // check for second array 
    if(ans2)
        cout<<"Array2 is sorted..."<<endl;
    else
        cout<<"Array2 is not sorted"<<endl;





    return 0;
}