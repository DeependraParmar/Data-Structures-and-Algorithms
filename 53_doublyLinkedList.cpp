#include <iostream>
using namespace std;
int count = 0;
class Node{
    public:
        Node* prev;
        int info;
        Node* next;

        Node(int data){
            this->info = data;
            this->prev = NULL;
            this->next = NULL;
        }
        ~Node(){
            int value = this->info;
            if(this->next != NULL){
                delete next;
                this->next = NULL;
            }
            cout<<"node deleted with value: "<<value<<endl;
        }
};
Node *head = NULL;
Node *tail = NULL;
Node *temp = NULL;
Node *newn;


void insertAtHead(int data){
    newn = new Node(data);

    newn -> next = head;
    head -> prev = newn; 
    head = newn;
    count++;
}
void insertAtTail(int data){
    newn = new Node(data);

    tail->next = newn;
    newn->prev = tail;
    tail = newn;
    count++;
}
void insertAtPosition(int data, int pos){
    if(pos == 1){
        insertAtHead(data);
        return;
    }
    else if(pos == count+1){
        insertAtTail(data);
        return;
    }
    else if(pos > 1 && pos < count+1){
        int n = 1;
        newn = new Node(data);
        temp = head;

        while(n < pos-1){
            temp = temp->next;
            n++;
        }
        newn->next = temp->next;
        temp->next->prev = newn;
        newn->prev = temp;
        temp->next = newn;
        count++;
    }
    else{
        cout<<"Invalid Position"<<endl;
    }
}
void deleteNode(int pos){
    if(pos == 1){
        temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        count--;
    }
    else{
        Node* curr = head;
        Node* prev = NULL;

        int n = 1;

        while(n < pos){
            prev = curr;
            curr = curr->next;
            n++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
        count--;
    }
}
void printList(){
    temp = head;

    while(temp != NULL){
        cout << temp->info << " ";
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(6);
    if(head == NULL){
        head = node1;
        tail = node1;
        count++;
    }

    insertAtHead(8);
    insertAtHead(10);
    insertAtTail(4);
    insertAtPosition(5,3);
    deleteNode(1);
    printList();

    cout<<endl<<"Total Nodes: "<<count<<endl;

    return 0;
}