#include <iostream>
using namespace std;
int binarySearch(int arr[],int start,int end, int key){
    int mid = start + (end-start)/2;

    //base case
    if(start>end)
        return -1;
    
    if(arr[mid] == key)
        return mid;
    
    else if(arr[mid]<key)
        return binarySearch(arr,mid+1,end,key);
    
    else    
        return binarySearch(arr,start,mid-1,key);
}
int main(){
    // Here in this, we are going to implement the concept of binary search using recursion 
    int arr[] = {2,6,9,14,23,67,89,122};
    int size = 8;
    
    cout<<"Found at index: "<<binarySearch(arr,0,size-1,67)<<endl;
    cout<<"Found at index: "<<binarySearch(arr,0,size-1,123)<<endl;


    return 0;
}