#include <iostream>
#include <stack>
using namespace std;

class Mystack
    {
        int *arr;
        int size;
        int top;

    public:
        Mystack()
        {
            arr = new int[size];
            top = -1;
        }

        void push(int val)
        {
            if (top == size - 1)
            {
                cout << "Stack is full" << endl;
                return;
            }
            top++;
            arr[top] = val;
        }

        int pop(){
            if(top==-1){
                cout<<"Stack is empty"<<endl;
            }
            return arr[top--];
        }
    };
    
    
int main()
{
    // stack<int> st;

    // push
    //  st.push(1);
    //  st.push(2);
    //  st.push(12);
    //  st.pop();
    //  cout << st.empty();
    //  cout<< st.top();

    // creating stack using arr

    
}