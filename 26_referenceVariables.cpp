#include <iostream>
using namespace std;
void update(int& var){
    var = var+10;
}
int main(){
    // Reference variables are nothing but the process or method of giving different names to a same variable. These variables even have different names but are pointing to the same memory block which means that they are sharing the memory.
    int a=6;
    cout<<"Before calling update(): "<<a<<endl;
    update(a);
    cout<<"After calling update(): "<<a<<endl;

    
    return 0;
}