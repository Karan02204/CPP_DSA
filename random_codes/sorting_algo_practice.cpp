#include <iostream>
using namespace std;

void bubble_sort(int arr[],int size){
    for(int i=0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
            }
        }
    }
}

void selection_sort(int arr[],int n){
    for(int i=0;i<n;i++){
        int min_index=i;

        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[min_index]){
                min_index = j;
            }
        }

        swap(arr[i],arr[min_index]);
    }

}

void insertion_sort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key=  arr[i];
        int j=i-1;

        while(j>=0 && arr[j]>key){
            arr[j+1] = arr[j];
            j--;
        }

        arr[j+1] = key;
    }
}

int main()
{
    int arr[]={ 64, 34, 25, 12, 22, 11, 90} ;
    int n = sizeof(arr)/sizeof(arr[0]);
    //selection_sort(arr,n);
    //bubble_sort(arr,n);
    insertion_sort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}