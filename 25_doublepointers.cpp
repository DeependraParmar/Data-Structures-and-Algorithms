#include <iostream>
using namespace std;

int main(){
    // Double pointers are the pointers which stores the address of the pointer    
    int num = 9;
    int* ptr = &num; // single pointer
    int** dptr = &ptr; //double pointer: storing address of single pointer


    // printing the address stored by the pointers 
    cout<<"Address of num: "<<&num<<endl;
    cout<<"Address stored by the single pointer ptr: "<<ptr<<endl<<endl;
    cout<<"Address of single pointer is: "<<&ptr<<endl;
    cout<<"Address stored by the double pointer dptr: "<<dptr<<endl;

    // accessing the value of num from single and double pointers 
    cout<<endl;
    cout<<"Num is: "<<num<<endl;
    cout<<"Num from single pointer is: "<<*ptr<<endl;
    cout<<"Num from double pointer is: "<<**dptr<<endl;

    return 0;
}