#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};

class Myqueue{
    private:
    Node* front ;
    Node* rear;

    public:
    Myqueue(){
        front = NULL;
        rear = NULL;
    }

    void enqueue(int value){
        Node* newNode = new Node(value);
        newNode->next = NULL;
        if(front == NULL){
            front = newNode;
            rear = newNode;
            return;
        }
        
        rear->next = newNode;
        rear = newNode;
    }

    void dequeue(){
        if(front == NULL){
            cout << "Queue is empty" << endl;
            return;
        }
        Node* temp = front;
        front=front->next;
        delete temp;
        if(front == NULL){
            rear=NULL;
        }
    }

    void display(){
        if(front==NULL){
            cout<<"Queue is empty"<<endl;
        }
        Node* temp = front;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp= temp->next;
        }
        cout << endl;
    }
};

int main()
{
    Myqueue queue;
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    queue.display();
    queue.dequeue();
    queue.display();
}