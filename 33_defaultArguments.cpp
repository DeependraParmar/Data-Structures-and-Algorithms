#include <iostream>
using namespace std;
void printArray(int arr[],int size, int start = 0){//start as default argument
    for(int i=start;  i<size; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    // Default Arguments are the arguments when you want to make a particular argument as optional for the user which he/she can give or may not. If not provided, the function does the task using the default value.Condition is that the rightmost parameter of the function signature must have the default parameter.
    int arr[] = {23,45,67,89,26,74};
    int size = 6;

    printArray(arr,size);//start not provided
    cout<<endl;
    printArray(arr,size,2);//start provided

    


    return 0;
}