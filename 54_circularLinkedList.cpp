#include <iostream>
using namespace std;
class Node{
    public: 
        int info;
        Node *next;

        Node(int data){
            this->info = data;
            this->next = NULL;
        }
        ~Node(){
            int value = this->info;
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"Node deleted: "<<value<<endl;
        }
};
Node* tail = NULL, *temp = NULL, *newn = NULL;
int count = 0;

void insertNode(int element,int data){
    //empty list
    if(tail == NULL){
        newn = new Node(data);
        tail = newn;
        newn->next = newn;
        count++;
    }
    //non-empty list
    else{
        temp = tail;
        while(temp->info != element){
            temp = temp->next;
        }
        //element found and temp is pointing to the node with info as element
        newn = new Node(data);
        newn->next = temp->next;
        temp->next = newn;
        count++;
    }
}
void deleteNode(int element){
    if(tail == NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    else{
        Node *prev = tail;
        temp = prev->next;

        while(temp->info != element){
            prev = temp;
            temp = temp->next;
        }
        prev->next = temp->next;
        if(temp == prev){
            tail = NULL;
        }
        if(tail == temp){
            tail = prev;
        }
        temp->next = NULL;
        delete temp;
        count--;
    }
}
void printList(){
    temp = tail->next;
    int n = 1;
    while(n<=count){
        cout << temp->info << " ";
        temp = temp->next;
        n++;
    }
    cout<<endl;
}

int main(){
    insertNode(3,3);
    insertNode(3,10);
    insertNode(3,20);
    insertNode(20,15);
    insertNode(15,30);
    insertNode(30,7);
    printList();
    deleteNode(3);
    printList();
    cout<<endl<<"Total Nodes: "<<count<<endl;
    cout<<"Tail: "<<tail->info<<endl;
    return 0;
}