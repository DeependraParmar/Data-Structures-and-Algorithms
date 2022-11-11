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
int partition(int arr[],int start,int end){
    int pivot = arr[start];
    int cnt = 0;

    // finding the count of smaller elements than pivot 
    for(int i=start+1; i<=end; i++){
        if(arr[i]<=pivot)
            cnt++;
    }

    // placing element at right position 
    int pivotIndex = start + cnt;
    swap(arr[pivotIndex],arr[start]);

    // now moving all smaller elements on left and greater on right 
    int i = start, j = end;
    while(i<pivotIndex && j>pivotIndex){
        while(arr[i] <= pivot){
            i++;
        }
        while(arr[j] > pivot){
            j--;
        }
        if(i<pivotIndex && j>pivotIndex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotIndex;
}
void quickSort(int arr[],int start, int end){
    //base case
    if(start >= end){
        return;
    }

    // get the position of the element 
    int p = partition(arr,start,end);

    // recursive call for left partition 
    quickSort(arr,start,p-1);

    // recursive call for right partition 
    quickSort(arr,p+1,end);
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *arr = new int[n];
    cout<<endl<<"Fill the array..."<<endl<<endl;
    fillArray(arr,n);  
    cout<<endl<<endl;
    cout<<"Sorting the array..."<<endl;
    quickSort(arr,0,n-1);
    cout<<endl;
    cout<<"Displaying the sorted array..."<<endl;
    displayArray(arr,n);




    return 0;
}