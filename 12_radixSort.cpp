#include <iostream>
using namespace std;
// function to fill the array with elements 
void fillArray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
// function to display the array 
void displayArray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
// function to find the maximum of the array 
int findMax(int a[],int n){
    int max = a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
// function to countSort 
void countSort(int a[],int n, int digit){
    int count[10] = {0};//for storing the position of the elements
    int *output = new int[n];

    // finding the frequency of the elements in the array 
    for(int i=0; i<n; i++){
        count[(a[i]/digit)%10]++;
    }

    // modifiying the count array according to the position 
    for(int i=1; i<10; i++){
        count[i] += count[i-1];
    }

    // now inserting the elements in the output array according to the position 
    for(int i=n-1; i>=0; i--){
        output[--count[(a[i]/digit)%10]] = a[i];
    }

    // now reassigning the values from the output array back to the original array 
    for(int i=0; i<n; i++){
        a[i] = output[i];
    }

}
// function for raddix sort 
void radixSort(int a[],int n){
    int max = findMax(a,n);
    int digit = 1;

    while(max>0){
        countSort(a,n,digit);
        max/=10;
        digit*=10;
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *a = new int[n];//dynamic memory allocation for the array of size n.....

    cout<<"Fill the elements in the array...."<<endl;
    fillArray(a,n);
    cout<<endl<<"The given input array looks like..."<<endl;
    displayArray(a,n);
    cout<<endl<<endl<<"Sorting the array...."<<endl;
    radixSort(a,n);
    cout<<endl<<"After sorting, the array looks like...."<<endl;
    displayArray(a,n);
    cout<<endl;


    return 0;
}