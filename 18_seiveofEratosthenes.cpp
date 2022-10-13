#include <iostream>
using namespace std;
void seiveOfEratosthenes(int n){
    int *a = new int[n]{0};
    for(int i=2; i<=n; i++){
        if(a[i] == 0){
            for(int j=i*i; j<=n; j+=i){
                a[j] = 1;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(a[i]==0){
            cout<<i<<" ";
        }
    }
}
int main(){
    // Seive of Eratosthenes is a concept mainly to find the prime number in given range in time complexity of O(loglogn) inspite of O(n^2). In this approach, we just mark all elements as prime and then we unmark them as they are divided and elements left at last are all prime numbers. 
    int n;
    cout<<"Enter the value of n upto which prime numbers are to be printed: ";
    cin>>n;

    seiveOfEratosthenes(n);


    return 0;
}