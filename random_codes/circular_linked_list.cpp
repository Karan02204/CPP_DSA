#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        this->data = val;
        next = NULL;
    }
};

void insertatHead(Node* &head, int val){
    Node* n = new Node(val);

    if(head==NULL){
        n->next=n;
        head=n;
        return;
    }

    Node* temp=head;

    while(temp->next !=head){
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
    head=n;
}

void insertatTail(Node* &head,int val){
    Node* n = new Node(val);

    if(head==NULL){
        insertatHead(head,val);
        return;
    }

    Node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }

    temp->next=n;
    n->next=head;
}

Node* floydDetectLoop(Node* head){
    if(head==NULL){
        return NULL;
    }

    Node* slow = head;
    Node* fast = head;

    while(fast!=NULL && fast->next!=NULL){
        slow = slow->next;
        fast=fast->next->next;

        if(slow == fast) return slow;
    }

    return NULL;
}

void deleteatHead(Node* &head){
    Node* temp=head;

    while(temp->next!=head){
        temp=temp->next;
    }

    Node* toDel=head;
    temp->next=head->next;
    head=head->next;

    delete toDel;
}

void display(Node* head){
    Node* temp=head;

    do{
        cout << temp->data << "->";
        temp=temp->next;
    }

    while(temp!=head);
}


Node* getStartingNode(Node* head){
    if(head == NULL) return NULL;

    Node* intersection = floydDetectLoop(head);
    Node* slow=head;

    while(slow!=intersection){
        slow= slow->next;
        intersection = intersection->next;
    }

    return slow;
}

void removeLoop(Node* head){
    if(head == NULL) return;

    Node* startofLoop = getStartingNode(head);
    Node* temp = startofLoop;

    while(temp->next !=startofLoop){
        temp=temp->next;
    }

    temp->next=NULL;
}

Node* reverse(Node* &head){
    Node* prev = NULL;
    Node* curr = head;
    Node* next;

    while(curr!=NULL){
        next = curr->next;
        curr->next = prev;
        prev=curr;
        curr=next;
    }
    return prev;
}

int main()
{
    Node* head=NULL;

    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);

    display(head);
    cout << endl;

    if(floydDetectLoop(head)){
        cout << "LOOP" << endl;
    }

    else cout << "NO LOOP" << endl;
}