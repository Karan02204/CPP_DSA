#include <iostream>
using namespace std;

int binarySearch(int arr[],int size,int key){
    int low = 0;
    int high = size - 1;
    

    while (low<=high){
        int mid=(low+high)/2;
        if (arr[mid] == key){
            return mid;
        }
        if (key>arr[mid]){
            low = mid + 1;
        }
        else {
            high = mid - 1;
        }
    }

    return -1;
}
int main(){
    int arr[5]={2,3,4,5,6};
    cout <<"Index of 3 is " << binarySearch(arr,5,3);
}