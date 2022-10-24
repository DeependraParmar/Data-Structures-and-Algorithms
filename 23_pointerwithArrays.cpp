#include <iostream>
using namespace std;

int main(){
    int arr[10] = {2,4,6,5,8,9,1,3,5,7};//When we write this, arr is basically the address of the memory block at first position or of 0th index.
    int* ptr = &arr[0];//in the same way we can create a pointer which points to the first block of array

    // Printing the address of the first memory block in various ways 
    cout<<"Address of the a[0] is: "<<arr<<endl;
    cout<<"Address of first block is: "<< &arr[0]<<endl;
    cout<<"Address stored by the pointer is: "<<ptr<<endl;


    // Printing the value of the a[0] in various ways 
    cout<<endl;
    cout<<"Value at a[0] is: "<<arr[0]<<endl;
    cout<<"Value at the address stored by the pointer is: "<<*ptr<<endl;



    return 0;
}