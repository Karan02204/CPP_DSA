#include <iostream>
using namespace std;
// You are using GCC
void swap(int arr[], int a, int b) {
    //Type your code here
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
    
}

void maxHeapify(int arr[], int n, int i) {
    //Type your code here
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;
    
    if(left<n && arr[largest]<arr[left]){
        largest = left;
    }
    
    if(right<n && arr[largest]<arr[right]){
        largest = right;
    }
    
    if(largest!=i){
        swap(arr,i,largest);
        maxHeapify(arr,n,largest);
    }
    
}

void buildMaxHeap(int arr[], int n) {
    //Type your code here
    for(int i=n/2-1;i>=0;i--){
        maxHeapify(arr,n,i);
    }
    
}

void insertIntoMaxHeap(int arr[], int &n, int value) {
    //Type your code here
    n+=1;
    int index = n-1;
    arr[index] = value;
    
    // while(index > 0){
    //     int parent = (index-1)/2;
        
    //     if(arr[parent] < arr[index]){
    //         swap(arr,parent,index);
    //         index = parent;
    //     }
    //     else return;
    // }

    buildMaxHeap(arr,n);
}



void deleteEvenNumbers(int arr[], int &n) {
    //Type your code here
    int i=0;
    while(i<n){
        if(arr[i]%2==0){
            swap(arr,i,n-1);
            n--;
            if(i<n){
                maxHeapify(arr,n,i);
            }
        }
        else i++;
    }
    
    
}

void printMaxHeap(int arr[], int n) {
    //Type your code here
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    int arr[100];
    int n = 0;
    int num_elements;

    cin >> num_elements;

    for (int i = 0; i < num_elements; i++) {
        int value;
        cin >> value;
        insertIntoMaxHeap(arr, n, value);
    }

    buildMaxHeap(arr, n);
    deleteEvenNumbers(arr, n);
    printMaxHeap(arr, n);

    return 0;
}