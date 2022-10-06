#include <iostream>
using namespace std;
// function to fill the array 
void fillArray(int arr[],int size, int &n){
    cout<<"Size of the array is: "<<size<<endl;
    cout<<"Enter the number of elements to fill: ";
    cin>>n;

    if(n>size){
        cout<<"Elements excedding size..."<<endl;
        fillArray(arr,size,n);
    }
    else{
        for(int i=0; i<n; i++){
            cout<<i<<": ";
            cin>>arr[i];
        }  
    }
}
// function to display the array 
void displayArray(int arr[],int &n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
}
// function to insert the element at the first position 
void insertAtFirst(int arr[],int size, int &n){

    if(n==size){
        cout<<endl<<"Overflow (Elements = Size of Array)"<<endl;
    }
    else{
        int item;
        cout<<endl<<"Enter the element to insert at first position: ";
        cin>>item;
        for(int i=n-1; i>=0; i--){
            arr[i+1] = arr[i];
        }
        arr[0] = item;
        n++;
        cout<<"After insertion of element at first position, the array looks like...."<<endl;
        displayArray(arr,n);
    }
}
// function to insert the element at last position 
void insertAtLast(int arr[],int size,int &n){

    if(n==size){
        cout<<endl<<"Overflow (Elements = Size of Array)"<<endl;
    }
    else{
        int item;
        cout<<endl<<"Enter the element to insert at last position: ";
        cin>>item;
        arr[n] = item;
        n++; 
        cout<<"After insertion of element at last position, the array looks like...."<<endl;
        displayArray(arr,n);
    }
}
// function to insert the element at the given position 
void insertAtPosition(int arr[],int size,int &n){
    if(n==size){
        cout<<"Overflow (Elements = Size)"<<endl;
    }
    else{
        int pos;
        cout<<endl<<"Enter the position at which element is to be inserted: ";
        cin>>pos;
        int item;
        cout<<"Enter the item to insert at given index: ";
        cin>>item;

        for(int i=n-1; i>=pos; i--){
            arr[i+1] = arr[i];
        }
        arr[pos] = item;
        n++;

        cout<<endl<<"After insertion of element at given position, array looks like...."<<endl;
        displayArray(arr,n);
    }
}
int main(){
    // Here we are going to insert values or elements in the array and they can be inserted in various manners that is 1. At first position 2. At last position 3. At given position 
    int size = 8, n = 0;
    int arr[8];

    cout<<endl;
    fillArray(arr,size,n);

    cout<<endl;
    cout<<"The array looks like...."<<endl;
    displayArray(arr,n);
    cout<<endl;
    cout<<endl;

    int choice;
    cout<<"1: Insert at First Position...."<<endl;
    cout<<"2: Insert at Last Position...."<<endl;
    cout<<"3: Insert at Given Position...."<<endl;

    cout<<endl<<endl;
    cout<<"Enter you choice: ";
    cin>>choice;


    switch (choice)
    {
    case 1:
        insertAtFirst(arr,size,n);
        break;
    case 2:
        insertAtLast(arr,size,n);
        break;
    case 3:
        insertAtPosition(arr,size,n);
        break;
    
    default:
        cout<<"Invalid choice input!!! Please enter valid choice......"<<endl;
        break;
    }



    return 0;
}