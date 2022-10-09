#include <iostream>
using namespace std;
//function to fill the empty array with elements
void fillArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]: ";
        cin>>arr[i];
    }
}
// function to print the given input array 
void displayArray(int arr[],int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// function for two way linear search 
void twoWayLinearSearch(int arr[],int n){
    int item;
    cout<<"Enter the element to search in the array: ";
    cin>>item;

    int start = 0; 
    int end = n-1;
    int flag = 0;

    while(start<=end){
        if(arr[start] == item){
            flag = 1;
            break;
        }
        else if( arr[end] == item){
            flag = 2;
            break;
        }
        start++;
        end--;
    }
    if(flag==1){
        cout<<"Element found at index: "<<start<<endl;
    }
    else if(flag==2){
        cout<<"Element found at index: "<<end<<endl;
    }
    else{
        cout<<"Sorry!! Element not found..."<<endl;
    }
}
int main(){
    // Here in two way linear search, we use two pointers as start and end and check whether element at either start or end is equal to the item.If is it so, we return the index of the particular element else we return that element not found 
    int n = 8;
    int arr[8];

    fillArray(arr,n);
    cout<<endl;
    cout<<"The Given Input Array looks like..."<<endl;
    displayArray(arr,n);

    cout<<endl;
    twoWayLinearSearch(arr,n);
    cout<<endl;
    
    return 0;
}