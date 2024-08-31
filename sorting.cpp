#include <iostream>
using namespace std;

void selectionsort(int arr[],int size){

    for (int i=0;i<size;i++){
        int min=i;
        for (int j=i+1;j<size;j++){
            if(arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(arr[min],arr[i]);
    }
}

int main(){
    int arr[5]={5,4,3,2,1};
    selectionsort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}