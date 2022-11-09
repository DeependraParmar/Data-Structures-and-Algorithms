#include <iostream>
#include <string>
using namespace std;
void reverseString(string& str, int start, int end){
    //base case
    if(start>end){
        return;
    }

    swap(str[start++],str[end--]);
    reverseString(str,start,end);
}
int main(){
    // Here in this, we are going to  reverse the string using recursion 
    string str;
    cout<<"Enter the string to reverse: ";
    getline(cin,str);
    cout<<endl<<endl;
    cout<<"Original String is: "<<str<<endl;
    reverseString(str,0,str.length()-1);
    cout<<"Reverse String is: "<<str<<endl;
       
    return 0;
}