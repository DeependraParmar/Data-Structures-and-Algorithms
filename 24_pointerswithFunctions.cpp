#include <iostream>
using namespace std;
void printValue(int* p){
    cout<<"Address stored by the pointer is: "<<p<<endl;
    cout<<"Value at the address stored by the pointer is: "<<*p<<endl;
}
void update(int* p){
    p++;
}
int main(){
    // Pointers can be passed in the functions as well.
    int n = 3;
    int* ptr = &n;

    printValue(ptr);//this print function is going to print the address and value of the pointer 
    cout<<endl;
    // Now what we are going to do is going to create a function update() which is going to update the value at address stored by the pointer and lets see it will going to do it or not 
    cout<<"Before change,address stored by pointer is: "<< ptr<<endl;
    update(ptr);
    cout<<"After change,address stored by the pointer is: "<< ptr <<endl;// evne after updation , address is not gonna change because here the pointer is pass by value which means a copy of the pointer is being created in the update function and the address is changed within the scope of it and is not getting reflected in the main(); Then whats the solution: either print the address inside the update function or use reference variables.


    return 0;
}