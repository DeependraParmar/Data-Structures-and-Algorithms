#include <iostream>
#include <string>
using namespace std;
bool checkPalindrome(string str,int start,int end){
    //base case
    if(start>end){
        return true;
    }
    
    if(str[start] != str[end]){
        return false;
    }
    else{
        return checkPalindrome(str,start+1,end-1);
    }
}
int main(){
    // Here, we are going to check whether a given string is palindrome or not 
    string str;
    cout<<"Enter the string: ";
    getline(cin,str);
    
    bool result = checkPalindrome(str,0,str.length()-1);

    if(result){
        cout<<"Palindrome"<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

    return 0;
}