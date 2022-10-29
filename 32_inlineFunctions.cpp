#include <iostream>
using namespace std;
inline int findMax(int& a, int& b){
    return (a>b)?a:b;//using the ternary operator for writing the single line body of the inline function findMax()
}
int main(){
    // Inline functions are special functions which copy themselves at the place where they are called in order to save the overhead calls and to prevent performance hit due to overloading over the calling stack...But, there is just one condition that it must have body of just one line......A function can be made inline using the keyword inline before writing the return type of the function.
    //For example, we need to find the greatest of two numbers then , we can create an inline function.

    int a,b;
    cout<<"Enter the first number: ";
    cin>>a;
    cout<<"Enter the second number: ";
    cin>>b;

    int ans = findMax(a,b);
    cout<<endl<<"Greatest of given numbers is: "<<ans<<endl;


    return 0;
}