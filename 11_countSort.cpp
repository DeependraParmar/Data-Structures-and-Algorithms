#include <iostream>
using namespace std;
void fillArray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    }
}
void displayArray(int a[],int n){
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
}
int maxElement(int a[],int n){
    int max = a[0];
    for(int i=1; i<n; i++){
        if(a[i]>max){
            max = a[i];
        }
    }
    return max;
}
void countSort(int a[],int n){
    int max = maxElement(a,n);
    int *count{new int[max+1] {0}};
    
    // loop to insert the frequency of occurence of elements in count array 
    for(int i=0; i<n; i++){
        count[a[i]]++;
    }

    // loop to update the count array and fill the array with position 
    for(int i=1; i<=max; i++){
        count[i]+=count[i-1];
    }

    int *output = new int[n];
    // loop to fill the output array with sorted elements 
    for(int i=n-1; i>=0; i--){
        output[--count[a[i]]] = a[i];
    }

    // now this is the loop to reassign the value to the original array 
    for(int i=0; i<n; i++){
        a[i] = output[i];
    }
}
int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int *a = new int[n];//dynamic memory allocation for static arrays

    cout<<"Fill the elements in the array..."<<endl;
    fillArray(a,n);
    cout<<endl<<"The given input array looks like..."<<endl<<endl;
    displayArray(a,n);

    cout<<endl<<"Sorting the array...."<<endl<<endl;
    countSort(a,n);

    cout<<"The sorted array looks like...."<<endl;
    displayArray(a,n);

    return 0;
}