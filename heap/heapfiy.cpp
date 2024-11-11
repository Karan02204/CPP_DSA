/* n/2 +1 - the formula to take out the index range of leaf nodes
we dont check for the leaf nodes in heapificaiton
we check for the nodes from 1 to n/2 in heapification*/


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

    void heapify(int arr[] , int size, int i){
        int largest = i;

        int left = 2*i;
        int right = 2*i+1;

        if(left<size && arr[largest] < arr[left]){
            largest  =left;
        }
        if(right<size && arr[largest] < arr[right]){
            largest  =right;
        }

        if(largest != i){
            swap(arr[largest],arr[i]);
            heapify(arr,size,largest);
        }
    }
};

int main()
{
    Heap h;
    
    int arr[] = {-1,10,9,8,12,7};

    int size = 6;
    for(int i=size/2;i>0;i--){
        h.heapify(arr,size,i);
    }

    for(int i=1;i<size;i++){
        cout << arr[i] << " ";
    }
}