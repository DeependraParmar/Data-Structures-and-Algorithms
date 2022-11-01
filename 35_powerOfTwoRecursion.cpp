#include <iostream>
using namespace std;
int powerOfTwo(int n){
    // base conditioñ
    if(n==0)
        return 1;

    int result = 2 * powerOfTwo(n-1);
    return result;
}
int main(){
    // Recursion is basically the technique of solving a big and complex problem using a similar smaller problem 
    // for eg, we need to find the result of 2^n so , we can solve it easily using its base condition and recursive relation 
    int n;
    cout<<"Enter how much power of 2 is to be evaluated: ";
    cin>>n;

    cout<<"Value of 2^n is: "<<powerOfTwo(n)<<endl<<endl;

    
    return 0;
}