#include <iostream>
//#include <queue>
using namespace std;

class MyQueue{
    int* arr;
    int front;
    int rear;
    int size;

    public:
    MyQueue(){
        arr = new int[size];
        front,rear = -1;
    }

    void push(int val){
        
        if(rear== size-1){
            cout << "Queue Overflow" << endl;
            return;
        }

        rear++;
        arr[rear] = val;

        if(front==-1){
            front++;
        }
    }

    void pop(){
        if(front==-1){
            cout << "No elements in queue";
            return;
        }

        front++;
    }
};

int main()
{
    // queue<int> q1;

    // q1.push(5);
    // q1.push(15);
    // cout << q1.front();
    // cout << q1.back();


}