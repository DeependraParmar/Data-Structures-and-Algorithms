#include <iostream>
using namespace std;
void fillArray(int arr[],int n){
    cout<<"Fill the elements in the array.Elements must be in sorted order..."<<endl<<endl;
    cout<<"0: ";
    cin>>arr[0];

    for(int i=1; i<n; i++){
        cout<<i<<": ";
        cin>>arr[i];
        if(arr[i-1]>arr[i]){
            cout<<"Value not sorted.....Enter the value again but sorted..."<<endl;
            i--;
        }
    }
}
void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
int binarySearch(int arr[],int n){
    int item;
    cout<<"Enter the element to search in the array: ";
    cin>>item;

    int start = 0;
    int end = n-1;
    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid]==item){
            return mid;
        }
        else if(arr[mid]>item){
            end = mid-1;
        }
        else{
            start = mid+1;
        }
        mid = start + (end-start)/2;
    }
    return -1;
}
int main(){
    int arr[8];
    int n = 8;

    
    fillArray(arr,n);
    cout<<endl<<"The Input Array looks like...."<<endl;
    displayArray(arr,n);
    cout<<endl;
    int res = binarySearch(arr,n);
    cout<<endl;

    if(res==-1){
        cout<<"Element not found...."<<endl;
    }
    else{
        cout<<"Element found at Index: "<<res<<endl;
    }
    
    
    return 0;
}