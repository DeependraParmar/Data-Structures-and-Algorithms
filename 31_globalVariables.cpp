#include <iostream>
using namespace std;

// global variable created 
int global = 10;

int a(){
    cout<<"Global variable in a: "<<global<<endl;
}
int b(){
    cout<<"Global variable in b: "<<global<<endl;
    global += 10;//changing value by reassigning
}


int main(){
    // Global variables are the variables that has global scope all over the program and can be accessed by any function, class or scope. But we must avoid using global variables in many cases because through reassigning, its value can be easily changed. 
    //Global variables are defined above or outside the scope of int main();

    a();//calling a function

    b();//calling b function

    cout<<"Global variable in main: "<<global<<endl;

    {
        cout<<"Global variable in undefined scope: "<<global<<endl;
    }





    return 0;
}