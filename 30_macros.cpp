#include <iostream>
using namespace std;
#define pi 3.1415926


int main(){
    // Macros are basically the expressions which do not occupy space in the memory and their name is being replaced by their value by the compiler before compilation.
    // macros are defined with the help of #define

    double r;
    cout<<"Enter the radius of the circle: ";
    cin>>r;

    double area = pi * r * r;
    cout<<"Area is: "<<area<<endl;


    




    return 0;
}