#include <iostream>
using namespace std;
void fillArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
    }
}
void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
void merge(int arr[],int s, int e){
    int mid = s + (e-s)/2;
    int len1 = mid-s+1;
    int len2 = e-mid;

    int *first = new int[len1];
    int *second = new int[len2];

    // copying the data from main array to new arrays 
    int mainArrayIndex = s;
    for(int i=0; i<len1; i++){
        first[i] = arr[mainArrayIndex++];
    }

    mainArrayIndex = mid+1;
    for(int i=0; i<len2; i++){
        second[i] = arr[mainArrayIndex++];
    }

    // now merging two arrays in original array and sorting
    int i=0,j=0;
    mainArrayIndex = s;

    while(i<len1 && j<len2){
        if(first[i] < second[j]){
            arr[mainArrayIndex++] = first[i++]; 
        }
        else{
            arr[mainArrayIndex++] = second[j++];
        }
    }

    while(i<len1){
        arr[mainArrayIndex++] = first[i++];
    }

    while(j<len2){
        arr[mainArrayIndex++] = second[j++];
    }

    delete[] first;
    delete[] second;
}
void mergeSort(int arr[],int s, int e){
    int mid = s + (e-s)/2;

    // base case 
    if(s>=e){//means only one element is present in the array and it cannot be broke down further.
        return;
    }

    //for left part
    mergeSort(arr,s,mid);

    // for right part 
    mergeSort(arr,mid+1,e);

    //merging the arrays 
    merge(arr,s,e);
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    fillArray(arr,n);

    mergeSort(arr,0,n-1);

    displayArray(arr,n);

    delete[] arr;
       
    return 0;
}