/*Node - i index(1)
left child - 2*i 
right child - 2*+1
parent - floor(i/2)

Node - i index (0)
left child - 2*i+1
right child - 2*i+2
parent - i/2 - 1
*/

#include <iostream>
using namespace std;

class Heap{
    public:
    int arr[100];
    int size;


    Heap(){
        arr[0] =-1;
        size = 0;
    }

    void insert(int val){
        size+=1;
        int index = size;
        arr[index] = val;

        while(index > 1){
            int parent = index/2;

            if(arr[parent] < arr[index]){
                swap(arr[parent],arr[index]);
                index = parent;
            }
            else return;
        }
    }

    void print(){
        for(int i=1;i<=size;i++){
            cout << arr[i] << " ";
        }
        cout << endl;
    }

    void deletion(){
        if(size ==0 ) return;

        arr[1] = arr[size];

        size--;

        int i=1;
        while(i<size){
            int leftIndex = 2*i;
            int rightIndex = 2*i+1;

            if(leftIndex < size && arr[i] < arr[leftIndex]){
                swap(arr[i],arr[leftIndex]);
                i = leftIndex;
            }

            else if (rightIndex < size && arr[i] < arr[rightIndex]){
                swap(arr[i],arr[rightIndex]);
                i = rightIndex;
            }

            else return;
        }
    }

    void heapify(int arr[] , int n, int i){
        
    }
};


int main()
{
    Heap h;
    h.insert(50);
    h.insert(60);
    h.insert(55);
    h.insert(70);
    h.insert(54);

    h.print();
    h.deletion();
    h.print();
}