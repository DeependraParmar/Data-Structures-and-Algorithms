#include <iostream>
using namespace std;

void printCounting(int n){
    if(n==0)
        return;
    
    printCounting(n-1);
    cout<<n<<" ";//head recursion
}
int main(){
    // Here , we are going to print the counting using recursion 
    int a;
    cout<<"Enter the number to print the counting upto: ";
    cin>>a;
    printCounting(a);






    return 0;
}