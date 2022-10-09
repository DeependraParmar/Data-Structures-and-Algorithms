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
// function for linear search 
void linearSearch(int arr[],int n){
    int item;
    cout<<"Enter the element to search in the given array: ";
    cin>>item;
    int flag = 0;
    int i=0;
    for(i; i<n; i++){
        if(arr[i]==item){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element found at index: "<<i<<endl;
    }
    else{
        cout<<"Sorry!! Element not found"<<endl;
    }
}
int main(){
    // Here in this, we are going to search an element in the given input array and print the index at which the target or item that is to be searched is found : Linear Search is a easy technique in which we traverses the whole array and we simply compare each element of the array with the item.If it matches, we print the index of the element else return that particular element is not found in the particular array 
    int n = 10;
    int arr[10];
    fillArray(arr,n);
    cout<<endl;
    cout<<"The given input array looks like..."<<endl;
    displayArray(arr,n);
    cout<<endl;
    linearSearch(arr,n);
    cout<<endl;

    return 0;
}