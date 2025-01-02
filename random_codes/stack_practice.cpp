#include <iostream>
#include <stack>

using namespace std;

class Mystack{
    private:
    int* arr;
    int top;
    int size;

    public:
    Mystack(int size){
        top = -1;
        this->size = size;
        arr= new int[size];
    }

    void push(int val){
        if(top==size-1){
            cout <<"Stack overflow " << endl;
            return;
        }
        arr[++top] = val;
    }

    void pop(){
        if(top==-1){
            cout << "Stack underflow" << endl;
            return;
        }
        top--;
    }

    int peek(){
        if(top==-1){
            cout << "Empty stack" << endl;
            return -1;
        }
        return arr[top]; 
    }

    void display(){
        if(top==-1){
            cout << "Empty stack" << endl;
            return;
        }

        cout << "stack elements: ";
        for( int i=0;i<=top;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main()
{
    Mystack st(5);
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.display();
    st.pop();
    st.display();
}