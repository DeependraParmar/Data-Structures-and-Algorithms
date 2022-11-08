#include <iostream>
using namespace std;
int firstOccurence(int arr[],int start, int end, int key){
    int mid = start + (end-start)/2;
    int ans = -1;
    // base condition 
    if(start > end)
        return -1;

    // recursive calls for finding the first occurence 
    if(arr[mid] == key){
        ans = mid;
        int mayAns = firstOccurence(arr,start,mid-1,key);

        if(mayAns == -1){
            return ans;
        }
        return mayAns;
    }
    else if(key > arr[mid]){
        return firstOccurence(arr,mid+1,end,key);
    }
    else if(key < arr[mid]){
        return firstOccurence(arr,start,mid-1,key);
    }
}
int lastOccurence(int arr[],int start, int end, int key){
    int mid = start + (end-start)/2;
    int ans = -1;

    // base case ?
    if(start > end)
        return -1;

    // conditions for finding the last occurence 
    if(arr[mid] == key){
        ans = mid;
        int mayAns = lastOccurence(arr,mid+1,end,key);
        if(mayAns == -1){
            return ans;
        }
        return mayAns;
    }
    else if(arr[mid] < key){
        return lastOccurence(arr,mid+1,end,key);
    }
    else if(arr[mid] > key){
        return lastOccurence(arr,start,mid-1,key);
    }
}
int main(){
    // Here in this, we are going to find the first and last occurence of given key from the array using recursion. So, we are just going to see for the base condition and then using the recursive relation and recursive calling, the work will take place.
    int arr[] = {1,2,3,3,3,3,4,5};
    int size = 8;
    cout<<"Array is: [1 2 3 3 3 3 4 5]"<<endl;
    int key;
    cout<<"Enter the key to find corresponding occurences: ";
    cin>>key;

    int start = 0;
    int end = size-1;

    int first = firstOccurence(arr,start,end,key);
    int last = lastOccurence(arr,start,end,key);

    cout<<"First Occurence of the given key is: "<<first<<endl;
    cout<<"Last Occurence of the given key is: "<<last<<endl;
    cout<<"Total Occurence of the given key is: "<<last-first+1<<endl;




    return 0;
}       