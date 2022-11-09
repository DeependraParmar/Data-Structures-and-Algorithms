#include <iostream>
#include <string>
using namespace std;
void reverseStringSinglePointer(string& str,int start){
    int n = str.length()-1;

    //base case
    if(start>(n/2)){
        return;
    }

    swap(str[start],str[n-start]);
    start++;
    
    reverseStringSinglePointer(str,start);
}
int main(){
    // Here, we are going to reverse the given string using single pointer using recursion.
    string str;   
    cout<<"Enter the string: ";
    getline(cin,str);

    
    cout<<endl<<endl<<"Original String is: "<<str<<endl;
    reverseStringSinglePointer(str,0);
    cout<<"Reverse string is: "<<str<<endl;

    return 0;
}