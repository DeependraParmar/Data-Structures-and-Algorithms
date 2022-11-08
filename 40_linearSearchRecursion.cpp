#include <iostream>
using namespace std;

bool linearSearch(int arr[],int size, int key){
    // base case 
    if(size <= 0)
        return false;
    
    if(arr[0]==key)
        return true;
    
    else
        return linearSearch(arr+1,size-1,key);
}
int main(){
    // Here in this, we are going to implement the concept of linear search using recursion 
    int arr[] = {2,5,3,8,6,9,4};
    int size = 7;
    int key = 8;

    bool ans = linearSearch(arr,size,key);

    if(ans)
        cout<<"Element Found"<<endl;
    else
        cout<<"Not Found"<<endl;


    return 0;
}