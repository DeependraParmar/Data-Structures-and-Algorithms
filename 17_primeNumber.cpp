#include <iostream>
#include <math.h>
using namespace std;
bool checkPrime(int n){
    int sq = sqrt(n);
    
    if(n==2){
        return 0;
    }
    else{
        for(int i=3; i<=sq; i+=2){
            if(n%i==0){
                return 0;
            }
        }
    }
    return 1;
}
int main(){
    // In this, we are going to find whether the given number is prime or not 
    int n;
    cout<<"Enter the number to check prime: ";
    cin>>n;

    if(checkPrime(n)){
        cout<<"Prime Number....."<<endl;
    }
    else{
        cout<<"Non-Prime Number....."<<endl;
    }



    return 0;
}