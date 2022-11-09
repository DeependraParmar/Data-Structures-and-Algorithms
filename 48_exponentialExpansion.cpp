#include <iostream>
using namespace std;
long long int power(int a,int b){
    //base case 
    if(b==0)
        return 1;

    if(b==1)
        return a;
    
    long long int ans = power(a,b/2);

    if(b%2 == 0){
        //b is even 
        return ans*ans;
    }
    else{
        //b is odd
        return a*ans*ans;
    }
}
int main(){
    // Here in this, we are going to evaluate the value of a raised to power b. 
    int a,b;
    cout<<"Enter the base: ";
    cin>>a;
    cout<<"Enter the power: ";
    cin>>b;

    long long int result = power(a,b);
    cout<<"Result is: "<<result<<endl;
    return 0;
}