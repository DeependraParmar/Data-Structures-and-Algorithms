#include <iostream>
using namespace std;

int main(){
    // While allocating the memory dynamically for 2 dimensional arrays, first we need to create a column of pointers which are basically the pointers with the base address of the rows and then we create corresponding columns using the row pointers and the array is created 
    int row,col;
    cout<<"Enter the number of rows: ";
    cin>>row;

    cout<<"Enter the number of columns: ";
    cin>>col;

    // created the 2d array prototype using pointers 
    int** arr = new int*[row];

    // now creating the corresponding columns for row pointers 
    for(int i=0; i<row; i++){
        arr[i] = new int[col];
    }

    // taking the input elements to fill the array?
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<"arr["<<i<<"]["<<j<<"]: ";
            cin>>arr[i][j];
        }
    }

    // printing the whole 2d array /
    cout<<endl;
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

    // manually releasing the memory allocated for arrays 
    for(int i=0; i<row; i++){
        delete[] arr[i];
    }
    delete[] arr;
    cout<<endl<<"Memory released successfully...."<<endl;



    return 0;
}