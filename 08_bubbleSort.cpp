#include <iostream>
using namespace std;
// function to fill the elements in the array 
void fillArray(int arr[], int n){
        for(int i=0; i<n; i++){
            cout<<i<<": ";
            cin>>arr[i];
        }
}
// function to display the array 
void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// function for bubble Sort 
void bubbleSort(int arr[],int n){
    for(int p=0; p<=n-2; p++){
        for(int c=0; c<=n-2-p; c++){
            if(arr[c]>arr[c+1]){
                swap(arr[c],arr[c+1]);
            }
        }
    }
}
int main(){
    // Here in the Bubble Sort, we compare two adjacent elements and if first element is greater than the second one then we swap the elements so that order would be preserved. With every pass the greatest unsorted element reaches its correct position........
    int n = 8;
    int arr[8];

    fillArray(arr,n);
    cout<<endl;
    cout<<"The Input Array looks like...."<<endl;
    displayArray(arr,n);
    cout<<endl;
    cout<<endl<<"Sorting the array...."<<endl;
    bubbleSort(arr,n);
    cout<<endl<<"After sorting, the array looks like...."<<endl;
    displayArray(arr,n);


    return 0;
}