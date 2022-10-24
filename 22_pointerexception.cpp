#include <iostream>
using namespace std;

int main(){
    int a = 4;
    //int* ptr1;// A pointer must always be initialised because an uninitialised pointer means it is pointing to a memory block which is not even part of your code and may prove dangerous for us in future and can create exceptions.

    int* ptr;
    //ptr = 100; new address cannot be assigned to a pointer. Arithmetic can be done...

    cout<<"Address of the pointer is: "<<ptr<<endl;
    cout<<"Value stored by the pointer is: "<< *ptr <<endl; //storing garbage value

    return 0;
}