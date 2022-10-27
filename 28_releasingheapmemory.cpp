#include <iostream>
using namespace std;

int main(){
    // In static memory, after the execution of the program , the memory is automatically released but in case of heap memory, we need to manually release the memory...   
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int* arr = new int[n];//allocating memory for an array of size n

    //filling the array with values
    cout<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<"arr["<<i<<"]: ";
        cin>>arr[i];
    }

    // printing the filled array 
    cout<<endl<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }


    // releasing the memory using delete keyword 
    delete[] arr;
    cout<<endl<<endl;
    cout<<endl<<"Memory released successfully...."<<endl;

    return 0;
}