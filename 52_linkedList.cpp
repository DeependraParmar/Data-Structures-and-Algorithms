#include <iostream>
using namespace std;
class Node{
    public:
        int info;
        Node* next;

        // constructor for creating a new node for the linked list 
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
            cout<<"node deleted with value"<<value<<endl;
        }
};
Node *head = NULL;
Node *tail = NULL;
Node *temp = NULL;
int cnt = 0;

void insertAtHead(int data){
    Node *newn = new Node(data);

    newn -> next = head;
    head = newn;
    cnt++;
}
void insertAtTail(int data){
    Node *newn = new Node(data);

    tail->next = newn;
    tail = newn;
    cnt++;
}
void insertAtPosition(int data){
    int pos;
    cout<<"Enter the position for inserting node: ";
    cin>>pos;

    int n = 1;
    temp = head;
    Node *newn = new Node(data);
    while(n < pos-1){
        temp = temp->next;
        n++;
    }
    newn->next = temp->next;
    temp->next = newn;
    cnt++;
}
void deleteNode(){
    int pos;
    cout<<"Enter the position to delete node: ";
    cin>> pos;

    if(pos == 1){
        temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }
    else{
        Node *curr = head;
        Node *prev = NULL;

        int n = 1;

        while(n < pos){
            prev = curr;
            curr = curr->next;
            n++;
        }
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}
void printLinkedList(){
    temp = head;
    while(temp != NULL){
        cout << temp->info << " ";
        temp = temp->next;
    }
    cout << endl;
}
int main(){
    Node *node1 = new Node(10);
    if(head == NULL){
        head = node1;
        tail = node1;
        cnt++;
    }
    printLinkedList();

    insertAtHead(8);
    insertAtHead(4);
    insertAtTail(12);
    insertAtPosition(6);
    deleteNode();

    printLinkedList();

    return 0;
}