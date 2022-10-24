#include <iostream>
using namespace std;

int main(){
    // Pointer is like a datatype which is used to store the address of a particular memory block. 
    int a = 5;
    int* ptr = &a;// pointer is created from * and address of other variable is stored by using address of & operator.

    // Here * is called as dereferencing opearator and gives the value of variable kept at following address.
    cout<<"Value of a is: "<<a<<endl;
    cout<<"Value at address stored by pointer is: "<<*ptr<<endl<<endl;


    // Address of a and its pointer is always same 
    cout<<"Address of a is: "<<&a<<endl;
    cout<<"Address stored by ptr is: "<<ptr<<endl;



    return 0;
}