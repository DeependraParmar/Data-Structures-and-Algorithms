#include <iostream>
using namespace std;
// function to find the first occurence of the key 
int firstOccurence(int arr[],int size,int key){
    int start = 0;
    int end = size-1;
    int ans = -1;

    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            end = mid-1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return ans;
}
// function to find the last occurence of given key 
int lastOccurence(int arr[],int size, int key){
    int start = 0;
    int end = size-1;
    int ans = -1;

    int mid = start + (end-start)/2;

    while(start<=end){
        if(arr[mid] == key){
            ans = mid;
            start = mid + 1;
        }
        else if(key > arr[mid]){
            start = mid + 1;
        }
        else if(key < arr[mid]){
            end = mid - 1;
        }
        mid = start + (end - start)/2;
    }
    return ans;
}
int main(){
    // Here, in this, we are given a totally sorted array and given an element key. We have to find the first occurence and the last occurence of the given key and its total occurence in the whole array. Occurence is referred as the index on which it is present 
    int arr[] = {1,2,3,3,3,3,4,5};
    cout<<"Array is: [1,2,3,3,3,3,4,5]"<<endl;
    int key;
    cout<<"Enter the key to find corresponding occurences: ";
    cin>>key;

    int firstOccurr = firstOccurence(arr,8,key);
    int lastOccurr = lastOccurence(arr,8,key);

    cout<<"First Occurence of given key is: "<<firstOccurr<<endl;
    cout<<"Last Occurence of given key is: "<<lastOccurr<<endl;
    cout<<"Total Occurence of given key is: "<<lastOccurr-firstOccurr+1<<endl;

    return 0;
}