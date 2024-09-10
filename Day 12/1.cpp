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

void insertatHead(Node* &head,int val){
    Node* n = new Node(val);

    n->next=head;
    head=n;
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
    insertatHead(head,40);
    insertatHead(head,30);
    insertatHead(head,20);
    insertatHead(head,10);

    printLinkedList(head);
}