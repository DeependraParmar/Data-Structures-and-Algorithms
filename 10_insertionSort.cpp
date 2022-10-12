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
// function for insertion sort 
void insertionSort(int arr[],int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>temp){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = temp;
    }
}
int main(){
    // Insertion sort is the sorting technique in which the logically divide the array into two parts that is the sorted one and the unsorted array. The we insert the element from the unsorted to the sorted......
    int n = 8;
    int arr[8];

    fillArray(arr,n);
    cout<<endl;
    cout<<"The Input Array looks like...."<<endl;
    displayArray(arr,n);
    cout<<endl;
    cout<<endl<<"Sorting the array...."<<endl;
    insertionSort(arr,n);
    cout<<endl<<"After sorting, the array looks like...."<<endl;
    displayArray(arr,n);
    
    return 0;
}