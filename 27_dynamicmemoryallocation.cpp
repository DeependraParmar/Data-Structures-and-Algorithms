#include <iostream>
using namespace std;

int main(){
    // Dynamic memory allocation is a technique of demaning memory from Heap at Runtime. Generally, the memory which we demand was made fixed at compile time and is allocated in stack memory. So when we demand memory from heap, the allocated memory is provided and base address is returned which can be accessed using a pointer 
    //Whenever we need to get memory dynamically allocated, we need to use " new " keyword.

    int *ptr = new int;//how much memory is to be allocated decided at runtime 
    cout<<"Enter the integer value: ";
    cin>>*ptr;

    cout<<"Value is: "<<*ptr<<endl;



    return 0;
}