#include <iostream>
using namespace std;
void swap(int arr[], int a, int b) {
    //Type your code here
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    
}
void maxHeapify(int arr[],int n,int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left<n && arr[left]>arr[largest]){
        largest = left;
    }

    if(right<n && arr[right]>arr[largest]){
        largest = right;
    }

    if(largest!=i){
        swap(arr[i],arr[largest]);
        maxHeapify(arr,n,largest);
    }
}
void buildMaxHeap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        maxHeapify(arr,n,i);
    }
}
void insertMaxHeap(int arr[],int &n,int value){
    n+=1;
    int index = n-1;
    arr[index] = value;

    buildMaxHeap(arr,n);
}

void deleteRoot(int arr[],int &n){
    if(n==0) return;
    arr[0] = arr[n-1];
    n--;
    maxHeapify(arr,n,0);
}

void printMaxHeap(int arr[], int n) {
    //Type your code here
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}


void heapSort(int arr[],int n){
    // for(int i=n/2-1;i>=0;i--){
    //     maxHeapify(arr,n,i);
    // }
    buildMaxHeap(arr,n);

    for(int i=n-1;i>=0;i--){
        swap(arr,0,i);
        maxHeapify(arr,i,0);
    }
}
int main()
{
    int arr[100];
    int n = 0;
    int num_elements;

    cin >> num_elements;

    for (int i = 0; i < num_elements; i++) {
        int value;
        cin >> value;
        insertMaxHeap(arr, n, value);
    }

    buildMaxHeap(arr, n);

    printMaxHeap(arr, n);

    //deleteRoot(arr, n);
    heapSort(arr,n);
    printMaxHeap(arr, n);
    return 0;
}