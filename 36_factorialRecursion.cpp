#include <iostream>
using namespace std;
int factorial(int n){
    // base condition ?
    if(n==0)
        return 1;
    
    return n*factorial(n-1);
}
int main(){
    int n;
    cout<<"Enter the number to print factorial of: ";
    cin>>n; 

    cout<<"Factorial is: "<<factorial(n)<<endl;

    return 0;
}