#include <iostream>
using namespace std;

int main(){
    // We can easily manipulate the value at address stored by the pointer using pointer. Pointer is certainly a variable which is capable of having both the address as well as the value of the value of the variable whose address it is being storing.
    // A pointer must be always initialised even with zero. A pointer which is certainly pointing to an unidentified and unrecognised location is very very risky.

    int a = 9;
    int *ptr = &a;

    // updating the value of the address stored by the pointer 

    cout<<"Before Updation: "<<*ptr<<endl;// gives 9
    (*ptr)++;
    cout<<"After Updation: "<<*ptr<<endl; // gives 10

    // If we want to create a new copy of the pointer then we can also copy a particular pointer into another pointer 
    int* ptr2 = ptr;
    cout<<endl<<"Address of Pointer 1: "<< ptr<<endl;
    cout<<"Address stored by Pointer 2: "<< ptr2<<endl;
    cout<<"Value stored by Pointer 1 is: "<< *ptr<<endl;
    cout<<"Value stored by Pointer 2 is: "<< *ptr2<<endl;



//    updating or manipulating the address stored by the pointer 

    cout<<endl<<"Address before: "<<ptr<<endl;//supppose address here is 1074
    ptr++;
    cout<<"Address after: "<<ptr<<endl;// address updated will be 1078 because while updating the address, the address is increased by the size of the type of the pointer. In our case, its integer, so the size it is increased by is 4 bytes, so it becomes 1078.


    return 0;
}