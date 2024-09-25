#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next=NULL;
    }
};

void InsertAtTail(Node* &head,int val){
    Node* n= new Node(val);

    if(head==NULL){
        head=n;
        return;
    };

    Node* temp= head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void InsertAtHead(Node* &head,int val){
    Node* n =  new Node(val);

    n->next=head;
    head=n;
}

void Deletion(Node* &head,int val){
    if(head==NULL) return;

    Node* temp= head;
    while(temp->next->data!=val){
        temp=temp->next;
    }
    Node* todelete=temp->next;
    temp->next=todelete->next;
    delete todelete;
}

void deletionAtHead(Node* &head){
    if(head==NULL) return;
    Node* todelete=head;
    head=head->next;
    delete todelete;
}

void display(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout << temp->data << " ";
        temp=temp->next;
    }
}

int main()
{
    Node* head=NULL;
    InsertAtTail(head,1);
    InsertAtTail(head,2);
    InsertAtTail(head,3);
    InsertAtHead(head,0);

    deletionAtHead(head);
    display(head);
}