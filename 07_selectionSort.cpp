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
// function for Selection Sort 
void selectionSort(int arr[],int n){
    for(int i=0; i<=n-2; i++){
        int min = i;
        for(int j=i+1; j<=n-1; j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
        if(min!=i){
            swap(arr[min],arr[i]);
        }
    }
}
int main(){
    // Here in the Selection Sort, we assume the element at first index as minimum and then we see for the minimum element in the remaining array and then we swap it with the assumed min
    int n = 8;
    int arr[8];

    fillArray(arr,n);
    cout<<endl;
    cout<<"The Input Array looks like...."<<endl;
    displayArray(arr,n);
    cout<<endl;
    cout<<endl<<"Sorting the array...."<<endl;
    selectionSort(arr,n);
    cout<<endl<<"After sorting, the array looks like...."<<endl;
    displayArray(arr,n);


    return 0;
}