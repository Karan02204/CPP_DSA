#include <iostream>
using namespace std;

void swap(int arr[],int a,int b){
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void maxHeapify(int arr[], int n , int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[largest]<arr[left]){
        largest = left;
    }
    if(right < n && arr[largest]<arr[right]){
        largest = right;
    }
    if(largest!=i){
        swap(arr,i,largest);
        maxHeapify(arr,n,largest);
    }
}

void buildMaxHeap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        maxHeapify(arr,n,i);
    }
}

void InsertMaxHeap(int arr[],int& n,int value){
    n++;
    int index = n-1;
    arr[index] = value;

    buildMaxHeap(arr,n);
}

void deleteRoot(int arr[],int& n){
    if(n==0) return;
    arr[0] = arr[n-1];
    n--;
    maxHeapify(arr,n,0);
}

void deleteEvenNumber(int arr[],int &n){
    int i=0;
    while(i<n){
        if(arr[i]%2==0){
            swap(arr,i,n-1);
            n--;
            if(i<n){
                maxHeapify(arr,n,i);
            }
        } else i++;
    }
}


void HeapSort(int arr[],int n){
    buildMaxHeap(arr,n);

    for(int i=n-1;i>=0;i--){
        swap(arr,0,i);
        maxHeapify(arr,i,0);
    }
}
void printMaxHeap(int arr[],int n){
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[100];
    int n=0;
    int numElements;
    cin >> numElements;


    for(int i=0;i<numElements;i++){
        int value;
        cin >> value;
        InsertMaxHeap(arr,n,value);
    }

    buildMaxHeap(arr,n);
    printMaxHeap(arr,n);

    //deleteRoot(arr,n);
    HeapSort(arr,n);
    printMaxHeap(arr,n);




}