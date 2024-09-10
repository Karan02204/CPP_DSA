#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next=NULL;
    }
};


void insertatEnd(Node* &head,int val){
    Node* n = new Node(val);

    if(head==NULL){
        head=n;
        return;
    }

    Node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next=n;
}

void printLinkedList(Node* head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp->data;
        if(temp->next!=NULL){
            cout<<" -> ";
        }
        temp = temp->next;
    }
}


int main()
{
    Node* head=NULL;

    insertatEnd(head,10);
    insertatEnd(head,20);
    insertatEnd(head,30);
    insertatEnd(head,40);

    printLinkedList(head);
}