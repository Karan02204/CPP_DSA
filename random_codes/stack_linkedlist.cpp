#include <iostream>
#include <stack>
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

class Mystack{
    private:
    Node* top;

    public:
    Mystack(){
        top = NULL;
    }

    void push(int value){
        Node* newNode = new Node(value);
        // newNode->data = value;
        newNode->next = top;
        top = newNode;
    }

    void pop(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
        }
        Node* temp = top;
        top =top->next;
        delete temp;
    }

    bool isEmpty(){
        return top==NULL;
    }

    void display(){
        if(isEmpty()){
            cout << "Stack is empty" << endl;
        }
        Node* temp =top;
        while(temp!=NULL){
            cout << temp->data << " ";
            temp=temp->next;
        }
        cout << endl;
    }
};

int main()
{

    Mystack stack;

    stack.push(1);
    stack.push(2);
    stack.push(3);
    stack.display();
    stack.pop();
    stack.display();
}